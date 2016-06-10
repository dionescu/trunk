bind(
  name = "libssl",
  actual = "//third_party/openssl:ssl",
)

bind(
  name = "zlib",
  actual = "//third_party/zlib",
)

# Protobuf compiler binary
bind(
  name = "protoc",
  actual = "@protobuf//:protoc"
)

# Library needed to build protobuf codegen plugin.
bind(
  name = "protobuf_compiler",
  actual = "@protobuf//:protoc_lib",
)

bind(
  name = "protobuf_java_lib",
  actual = "@protobuf//:protobuf_java",
)

# Library that C++ code generated by protobuf C compiler should depend
# on.
bind(
  name = "protobuf_clib",
  actual = "@protobuf//:protobuf",
)

# GRPC c++ codegen plugin
bind(
  name = "grpc_cpp_plugin",
  actual = "@grpc//:grpc_cpp_plugin"
)

# GRPC Java codegen plugin
bind(
  name = "grpc_java_plugin",
  actual = "@grpc_java//:grpc_java_plugin"
)

# GRPC C++ runtime library
bind(
  name = "grpc++",
  actual = "@grpc//:grpc++"
)

# GRPC Java runtime library
bind(
  name = "grpc_java",
  actual = "@grpc_java//:grpc-java"
)

# Guava dependency for grpc-java.
bind(
  name = "guava",
  actual = "//third_party/java/guava"
)

# Netty dependency for grpc-java.
bind(
  name = "netty",
  actual = "//third_party/java/netty"
)

maven_jar(
  name = "apache_commons_lang2_maven",
  artifact = "commons-lang:commons-lang:2.6"
)

bind(
  name = "apache_commons_lang2",
  actual = "@apache_commons_lang2_maven//jar"
)

maven_jar(
  name = "apache_commons_lang3_maven",
  artifact = "org.apache.commons:commons-lang3:3.4"
)

bind(
  name = "apache_commons_lang3",
  actual = "@apache_commons_lang3_maven//jar"
)

bind(
  name = "apache_commons_logging",
  actual = "//third_party/java/commons-logging"
)

bind(
  name = "apache_log4j",
  actual = "//third_party/java/log4j"
)

maven_jar(
  name = "hpack_maven",
  artifact = "com.twitter:hpack:v1.0.1"
)

bind(
  name = "hpack",
  actual = "@hpack-maven//jar"
)

bind(
  name = "javassist",
  actual = "//third_party/java/javassist",
)

maven_jar(
  name = "jetty_alpn_maven",
  artifact = "org.eclipse.jetty.alpn:alpn-api:1.1.2.v20150522"
)

bind(
  name = "jetty_alpn",
  actual = "@jetty_alpn_maven//jar"
)

maven_jar(
  name = "jetty_npn_maven",
  artifact = "org.mortbay.jetty.npn:npn-boot:1.1.11.v20150415"
)

bind(
  name = "jetty_npn",
  actual = "@jetty-npn-maven//jar"
)

maven_jar(
  name = "joda_time_maven",
  artifact = "joda-time:joda-time:2.3"
)

bind(
  name = "joda_time",
  actual = "@joda_time_maven//jar"
)


maven_jar(
  name = "jzlib_maven",
  artifact = "com.jcraft:jzlib:1.1.3"
)

bind(
  name = "jzlib",
  actual = "@jzlib_maven//jar"
)

maven_jar(
  name = "netty_tcnative_maven",
  artifact = "io.netty:netty-tcnative:1.1.33.Fork7"
)

bind(
  name = "netty_tcnative",
  actual = "@netty_tcnative_maven//jar"
)

bind(
  name = "slf4j",
  actual = "//third_party/java/slf4j"
)

# grpc-java dependencies
bind(
  name = "jsr305",
  actual = "//third_party/java/jsr305"
)

maven_jar(
  name = "google_auth_library_oauth2_http_maven",
  artifact = "com.google.auth:google-auth-library-oauth2-http:0.2.0"
)

bind(
  name = "google_auth_library_oauth2_http",
  actual = "@google_auth_library_oauth2_http_maven//jar"
)

maven_jar(
  name = "google_auth_library_credentials_maven",
  artifact = "com.google.auth:google-auth-library-credentials:0.2.0"
)

bind(
  name = "google_auth_library_credentials",
  actual = "@google_auth_library_credentials_maven//jar"
)

maven_jar(
  name = "guice_maven",
  artifact = "com.google.inject:guice:4.0",
)

bind(
  name = "guice",
  actual = "@guice_maven//jar"
)

maven_jar(
  name = "guice_multibindings_maven",
  artifact = "com.google.inject.extensions:guice-multibindings:4.0",
)

bind(
  name = "guice_multibindings",
  actual = "@guice_multibindings_maven//jar"
)

maven_jar(
  name = "hamcrest_maven",
  artifact = "org.hamcrest:hamcrest-core:1.3",
)

bind(
  name = "hamcrest",
  actual = "@hamcrest_maven//jar"
)

maven_jar(
  name = "junit_maven",
  artifact = "junit:junit:4.11"
)

bind(
  name = "junit",
  actual = "@junit_maven//jar"
)

maven_jar(
  name = "objenesis_maven",
  artifact = "org.objenesis:objenesis:2.1",
)

bind(
  name = "objenesis",
  actual = "@objenesis_maven//jar"
)

maven_jar(
  name = "mockito_maven",
  artifact = "org.mockito:mockito-core:1.10.19",
)

bind(
  name = "mockito",
  actual = "@mockito_maven//jar"
)

maven_jar(
  name = "okhttp_maven",
  artifact = "com.squareup.okhttp:okhttp:2.4.0",
)

bind(
  name = "okhttp",
  actual = "@okhttp_maven//jar"
)

maven_jar(
  name = "okio_maven",
  artifact = "com.squareup.okio:okio:1.5.0",
)

bind(
  name = "okio",
  actual = "@okio_maven//jar"
)

maven_jar(
  name = "commons_cli_maven",
  artifact = "commons-cli:commons-cli:1.2",
)

bind(
  name = "commons_cli",
  actual = "@commons_cli_maven//jar"
)

# Disable loading of any android depenedency rule
bind(name = "android/aar_generator")
bind(name = "android/incremental_split_stub_application")
bind(name = "android/incremental_stub_application")
bind(name = "android/resources_processor")

new_git_repository(
    name = "protobuf",
    remote = "https://github.com/google/protobuf.git",
    tag = "v3.0.0-beta-2",
    build_file = "build/BUILD.protobuf",
)
new_git_repository(
    name = "grpc",
    remote = "https://github.com/grpc/grpc.git",
    tag = "release-0_13_0",
    build_file = "build/BUILD.grpc",
)
new_git_repository(
    name = "grpc_java",
    remote = "https://github.com/grpc/grpc-java.git",
    commit = "643bb2c6b53d5a4516f13af856d98a85b334f0dc",
    build_file = "build/BUILD.grpcjava",
)
