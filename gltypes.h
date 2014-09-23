#ifndef GLTYPES_H
#define GLTYPES_H

#ifdef GLTYPES_OPENGL_INCLUDE
#include GLTYPES_OPENGL_INCLUDE
#endif

#ifndef __has_feature
#define __has_feature(x) 0
#endif

#if defined(__cplusplus) && __has_feature(cxx_constexpr)
#define GLTYPES_CONSTEXPR constexpr
#else
#define GLTYPES_CONSTEXPR static inline
#endif

GLTYPES_CONSTEXPR const char *gltypes_typeName(GLenum type) {
    return type == GL_FLOAT ? "GL_FLOAT" : type == GL_FLOAT_VEC2 ?
                              "GL_FLOAT_VEC2" :
                              type == GL_FLOAT_VEC3 ?
                              "GL_FLOAT_VEC3" :
                              type == GL_FLOAT_VEC4 ?
                              "GL_FLOAT_VEC4" :
                              type == GL_FLOAT_MAT2 ?
                              "GL_FLOAT_MAT2" :
                              type == GL_FLOAT_MAT3 ?
                              "GL_FLOAT_MAT3" :
                              type == GL_FLOAT_MAT4 ?
                              "GL_FLOAT_MAT4" :
                              type == GL_FLOAT_MAT2x3 ?
                              "GL_FLOAT_MAT2x3" :
                              type == GL_FLOAT_MAT2x4 ?
                              "GL_FLOAT_MAT2x4" :
                              type == GL_FLOAT_MAT3x2 ?
                              "GL_FLOAT_MAT3x2" :
                              type == GL_FLOAT_MAT3x4 ?
                              "GL_FLOAT_MAT3x4" :
                              type == GL_FLOAT_MAT4x2 ?
                              "GL_FLOAT_MAT4x2" :
                              type == GL_FLOAT_MAT4x3 ?
                              "GL_FLOAT_MAT4x3" :
                              type == GL_INT ? "GL_INT" : type == GL_INT_VEC2 ?
                                               "GL_INT_VEC2" :
                                               type == GL_INT_VEC3 ?
                                               "GL_INT_VEC3" :
                                               type == GL_INT_VEC4 ?
                                               "GL_INT_VEC4" :
                                               type == GL_UNSIGNED_INT ?
                                               "GL_UNSIGNED_INT" :
                                               type == GL_UNSIGNED_INT_VEC2 ?
                                               "GL_UNSIGNED_INT_VEC2" :
                                               type == GL_UNSIGNED_INT_VEC3 ?
                                               "GL_UNSIGNED_INT_VEC3" :
                                               type == GL_UNSIGNED_INT_VEC4 ?
                                               "GL_UNSIGNED_INT_VEC4" :
                                               type == GL_SHORT ?
                                               "GL_SHORT" :
                                               type == GL_UNSIGNED_SHORT ?
                                               "GL_UNSIGNED_SHORT" :
                                               type == GL_BYTE ?
                                               "GL_BYTE" :
                                               type == GL_UNSIGNED_BYTE ?
                                               "GL_UNSIGNED_BYTE" :
                                               "no-such-type";
}

GLTYPES_CONSTEXPR GLenum gltypes_typeBase(GLenum type) {
    return type == GL_FLOAT ? GL_FLOAT : type == GL_FLOAT_VEC2 ?
                              GL_FLOAT :
                              type == GL_FLOAT_VEC3 ?
                              GL_FLOAT :
                              type == GL_FLOAT_VEC4 ?
                              GL_FLOAT :
                              type == GL_FLOAT_MAT2 ?
                              GL_FLOAT :
                              type == GL_FLOAT_MAT3 ?
                              GL_FLOAT :
                              type == GL_FLOAT_MAT4 ?
                              GL_FLOAT :
                              type == GL_FLOAT_MAT2x3 ?
                              GL_FLOAT :
                              type == GL_FLOAT_MAT2x4 ?
                              GL_FLOAT :
                              type == GL_FLOAT_MAT3x2 ?
                              GL_FLOAT :
                              type == GL_FLOAT_MAT3x4 ?
                              GL_FLOAT :
                              type == GL_FLOAT_MAT4x2 ?
                              GL_FLOAT :
                              type == GL_FLOAT_MAT4x3 ?
                              GL_FLOAT :
                              type == GL_INT ? GL_INT : type == GL_INT_VEC2 ?
                                               GL_INT :
                                               type == GL_INT_VEC3 ?
                                               GL_INT :
                                               type == GL_INT_VEC4 ?
                                               GL_INT :
                                               type == GL_UNSIGNED_INT ?
                                               GL_UNSIGNED_INT :
                                               type == GL_UNSIGNED_INT_VEC2 ?
                                               GL_UNSIGNED_INT :
                                               type == GL_UNSIGNED_INT_VEC3 ?
                                               GL_UNSIGNED_INT :
                                               type == GL_UNSIGNED_INT_VEC4 ?
                                               GL_UNSIGNED_INT :
                                               type == GL_SHORT ?
                                               GL_SHORT :
                                               type == GL_UNSIGNED_SHORT ?
                                               GL_UNSIGNED_SHORT :
                                               type == GL_BYTE ?
                                               GL_BYTE :
                                               type == GL_UNSIGNED_BYTE ?
                                               GL_UNSIGNED_BYTE :
                                               GL_FALSE;
}

GLTYPES_CONSTEXPR int gltypes_typeElements(GLenum type) {
    return type == GL_FLOAT ? 1 : type == GL_FLOAT_VEC2 ?
                              2 :
                              type == GL_FLOAT_VEC3 ?
                              3 :
                              type == GL_FLOAT_VEC4 ?
                              4 :
                              type == GL_FLOAT_MAT2 ?
                              2 * 2 :
                              type == GL_FLOAT_MAT3 ?
                              3 * 3 :
                              type == GL_FLOAT_MAT4 ?
                              4 * 4 :
                              type == GL_FLOAT_MAT2x3 ?
                              2 * 3 :
                              type == GL_FLOAT_MAT2x4 ?
                              2 * 4 :
                              type == GL_FLOAT_MAT3x2 ?
                              3 * 2 :
                              type == GL_FLOAT_MAT3x4 ?
                              3 * 4 :
                              type == GL_FLOAT_MAT4x2 ?
                              4 * 2 :
                              type == GL_FLOAT_MAT4x3 ?
                              4 * 3 :
                              type == GL_INT ? 1 : type == GL_INT_VEC2 ?
                                               2 :
                                               type == GL_INT_VEC3 ?
                                               3 :
                                               type == GL_INT_VEC4 ?
                                               4 :
                                               type == GL_UNSIGNED_INT ?
                                               1 :
                                               type == GL_UNSIGNED_INT_VEC2 ?
                                               2 :
                                               type == GL_UNSIGNED_INT_VEC3 ?
                                               3 :
                                               type == GL_UNSIGNED_INT_VEC4 ?
                                               4 :
                                               type == GL_SHORT ?
                                               1 :
                                               type == GL_UNSIGNED_SHORT ?
                                               1 :
                                               type == GL_BYTE ?
                                               1 :
                                               type == GL_UNSIGNED_BYTE ?
                                               1 :
                                               GL_FALSE;
}

GLTYPES_CONSTEXPR int gltypes_sizeofBase(GLenum type) {
    return type == GL_FLOAT ? sizeof(GLfloat) : type == GL_INT ?
                              sizeof(GLint) :
                              type == GL_UNSIGNED_INT ?
                              sizeof(GLuint) :
                              type == GL_SHORT ?
                              sizeof(GLshort) :
                              type == GL_UNSIGNED_SHORT ?
                              sizeof(GLushort) :
                              type == GL_BYTE ?
                              sizeof(GLbyte) :
                              type == GL_UNSIGNED_BYTE ? sizeof(GLubyte) :
                                                         GL_FALSE;
}

GLTYPES_CONSTEXPR int gltypes_sizeof(GLenum type) {
    return gltypes_sizeofBase(gltypes_typeBase(type)) *
           gltypes_typeElements(type);
}

#endif
