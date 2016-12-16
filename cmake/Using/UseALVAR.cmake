MACRO(USE_ALVAR)
  COVISE_FIND_PACKAGE(ALVAR)
  IF ((NOT ALVAR_FOUND) AND (${ARGC} LESS 1))
    USING_MESSAGE("Skipping because of missing ALVAR")
    RETURN()
  ENDIF((NOT ALVAR_FOUND) AND (${ARGC} LESS 1))
  IF(NOT ALVAR_USED AND ALVAR_FOUND)
    SET(ALVAR_USED TRUE)
    INCLUDE_DIRECTORIES(${ALVAR_INCLUDE_DIR})
    SET(EXTRA_LIBS ${EXTRA_LIBS} ${ALVAR_LIBRARIES})
  ENDIF()
ENDMACRO(USE_ALVAR)
