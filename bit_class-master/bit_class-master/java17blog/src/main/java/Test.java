import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.ObjectMapper;
import models.UserInfo;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Test {
    public static void main(String[] args) throws JsonProcessingException {

        Map<String, Object> map = new HashMap<>();
        map.put("state", 200);
        map.put("msg", "操作成功");


        List<UserInfo> list = new ArrayList<>();
        for (int i = 0; i < 3; i++) {
            UserInfo userInfo = new UserInfo();
            userInfo.setUsername("java" + i);
            userInfo.setPassword("pwd" + i);
            list.add(userInfo);
        }


        // Jackson 使用
        // 1.创建 jackson 对象
        ObjectMapper mapper = new ObjectMapper();

        String result = mapper.writeValueAsString(list);
        System.out.println(result);

    }
}
