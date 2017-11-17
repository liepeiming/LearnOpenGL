#version 330 core

in vec3 ourColor;
in vec2 texCoord;

// texture sampler
uniform sampler2D texture1;
uniform sampler2D texture2;
uniform float mixValue;

void main() {
    //gl_FragColor = texture(texture1, texCoord);
    //gl_FragColor = texture(texture1, texCoord) * vec4(ourColor, 1.0f);
    //gl_FragColor = mix(texture(texture1, texCoord), texture(texture2, texCoord), 0.2f);
    //gl_FragColor = mix(texture(texture1, texCoord), texture(texture2, vec2(1.0f - texCoord.x, texCoord.y)), 0.2f);
    gl_FragColor = mix(texture(texture1, texCoord), texture(texture2, vec2(1.0f - texCoord.x, texCoord.y)), mixValue);
}
