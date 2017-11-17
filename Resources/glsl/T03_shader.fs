#version 330 core

in vec3 ourPos;

void main() {
    gl_FragColor = vec4(ourPos, 1.0f);
}
