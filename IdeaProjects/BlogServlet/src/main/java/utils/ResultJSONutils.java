package utils;


import com.fasterxml.jackson.databind.ObjectMapper;

import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.HashMap;

public class ResultJSONutils {
    public static void write(HttpServletResponse response, HashMap<String,Object> data) throws IOException {
        response.setCharacterEncoding("utf-8");
        response.setContentType("application/json");
        PrintWriter printWriter=response.getWriter();
        ObjectMapper mapper=new ObjectMapper();
        printWriter.println(mapper.writeValueAsString(data));
    }
}
