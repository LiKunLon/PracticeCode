package utils;

import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;

public class WriteUtils {

    // 输出 json 结果
    public static void resultJSON(HttpServletResponse resp, String json) throws IOException {
        resp.setCharacterEncoding("utf-8");
        resp.setContentType(ContentTypeEnum.ContentTypeJSON);
        PrintWriter writer = resp.getWriter();
        writer.println(json);
    }
}
