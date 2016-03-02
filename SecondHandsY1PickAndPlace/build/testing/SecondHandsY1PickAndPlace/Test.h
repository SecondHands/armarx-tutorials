/*
* This file is part of ArmarX.
*
* ArmarX is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*
* ArmarX is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*
* @author     Nils Adermann (naderman at naderman dot de)
* @date       2010
* @copyright  http://www.gnu.org/licenses/gpl-2.0.txt
*             GNU General Public License
*/

#ifndef SecondHandsY1PickAndPlace_TEST_H
#define SecondHandsY1PickAndPlace_TEST_H

#define BOOST_TEST_IGNORE_NON_ZERO_CHILD_CODE

#ifdef ARMARX_BOOST_TEST
    #ifdef WIN32
        #include <boost/test/included/unit_test.hpp>
    #else
        #define BOOST_TEST_DYN_LINK
        #include <boost/test/included/unit_test.hpp>
    #endif
#endif

#include <string>
#include <map>
#include <fstream>
#include <iostream>

#include <boost/iostreams/tee.hpp>
#include <boost/iostreams/stream.hpp>

namespace testout
{
    /**
     * typedef for tee_device redirecting output stream to another output stream
     */
    typedef boost::iostreams::tee_device<std::ostream, std::ostream> ostream_tee_device;
    /**
     * typedef for tee_device to output stream redirection
     */
    typedef boost::iostreams::stream<ostream_tee_device> tee_ostream;
}

namespace armarx
{
    namespace test
    {
        std::string getCmakeValue(const std::string& varName)
        {
            std::map<std::string, std::string> cmakeVars;
            cmakeVars["ARMARX_ARCHIVE_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/lib";
cmakeVars["ARMARX_BIN_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/bin";
cmakeVars["ARMARX_BUILD_TESTS"]="ON";
cmakeVars["ARMARX_CONFIG_DIR"]=".armarx";
cmakeVars["ARMARX_ENABLE_AUTO_CODE_FORMATTING"]="OFF";
cmakeVars["ARMARX_ENABLE_COVERAGE"]="OFF";
cmakeVars["ARMARX_ENABLE_DEPENDENCY_VERSION_CHECK"]="OFF";
cmakeVars["ARMARX_ENABLE_DEPENDENCY_VERSION_CHECK_DEFAULT"]="FALSE";
cmakeVars["ARMARX_EXE_EXTENSION"]="";
cmakeVars["ARMARX_LIB_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/lib";
cmakeVars["ARMARX_MISSING_PROJECT_DEPENDENCIES"]="";
cmakeVars["ARMARX_OS_LINUX"]="Linux";
cmakeVars["ARMARX_PACKAGE_LIBRARY_SOVERSION"]="0";
cmakeVars["ARMARX_PACKAGE_LIBRARY_VERSION"]="0.1.0";
cmakeVars["ARMARX_PACKAGE_LIBRARY_VERSION_MAJOR"]="0";
cmakeVars["ARMARX_PACKAGE_LIBRARY_VERSION_MINOR"]="1";
cmakeVars["ARMARX_PACKAGE_LIBRARY_VERSION_PATCH"]="0";
cmakeVars["ARMARX_PROC_64BIT"]="TRUE;BOOL;INTERNAL";
cmakeVars["ARMARX_PROJECT_DEPENDENCIES"]="ArmarXCore";
cmakeVars["ARMARX_PROJECT_DEPENDENT_DATA_DIRS"]="";
cmakeVars["ARMARX_PROJECT_DEPENDENT_TAG_FILES"]="ArmarXCore.tag=/usr/share/cmake/ArmarXCore/../../..//share/ArmarXCore/documentation/ArmarXCore.tag";
cmakeVars["ARMARX_PROJECT_DISABLED_DEPENDENT_TARGETS"]="";
cmakeVars["ARMARX_PROJECT_DISABLED_TARGETS"]="";
cmakeVars["ARMARX_PROJECT_NAME"]="SecondHandsY1PickAndPlace";
cmakeVars["ARMARX_PROJECT_PACKAGE_DEPENDENCY_PATHS"]="ArmarXCore:/usr/share/cmake/ArmarXCore";
cmakeVars["ARMARX_PROJECT_SOURCE_PACKAGE_DEPENDENCIES"]="";
cmakeVars["ARMARX_SYNC_DIR"]="/localhome/armar-user/armarx_felipebelo";
cmakeVars["ARMARX_TEST_H_DIRECTORY"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/testing/SecondHandsY1PickAndPlace";
cmakeVars["ARMARX_USER_CONFIG_DIR"]="$HOME/.armarx";
cmakeVars["ARMARX_USER_CONFIG_DIR_ABSOLUT"]="/home/felipebelo/.armarx";
cmakeVars["ARMARX_USER_SYNC_DIR"]="felipebelo";
cmakeVars["ARMARX_USER_VARIABLES_FILE"]="IceGridUserVariables.sh";
cmakeVars["ASTYLE_FOUND"]="TRUE";
cmakeVars["AStyle_EXECUTABLE"]="/usr/bin/astyle";
cmakeVars["AStyle_FOUND"]="TRUE";
cmakeVars["ArmarXCore_BINARY_DIR"]="/usr/share/cmake/ArmarXCore/../../..//bin";
cmakeVars["ArmarXCore_CMAKE_DIR"]="/usr/share/cmake/ArmarXCore/../../..//share/ArmarXCore/cmake";
cmakeVars["ArmarXCore_CONFIG"]="/usr/share/cmake/ArmarXCore/ArmarXCoreConfig.cmake";
cmakeVars["ArmarXCore_CONFIG_DIR"]="/usr/share/cmake/ArmarXCore/../../..//share/ArmarXCore/config";
cmakeVars["ArmarXCore_CONSIDERED_CONFIGS"]="/usr/share/cmake/ArmarXCore/ArmarXCoreConfig.cmake";
cmakeVars["ArmarXCore_CONSIDERED_VERSIONS"]="0.8.1";
cmakeVars["ArmarXCore_CURRENT_CMAKE_DIR"]="/usr/share/cmake/ArmarXCore";
cmakeVars["ArmarXCore_DATA_DIR"]="/usr/share/cmake/ArmarXCore/../../..//share/ArmarXCore/data";
cmakeVars["ArmarXCore_DEPENDENCIES"]="";
cmakeVars["ArmarXCore_DIR"]="/usr/share/cmake/ArmarXCore";
cmakeVars["ArmarXCore_DISABLED_TARGETS"]="";
cmakeVars["ArmarXCore_DOXYGEN_TAG_FILE"]="/usr/share/cmake/ArmarXCore/../../..//share/ArmarXCore/documentation/ArmarXCore.tag";
cmakeVars["ArmarXCore_EXECUTABLE"]="SystemObserverRun DebugObserverRun ConditionHandlerRun ClientStateRun RemoteAccessableStateRun StatechartPerformanceTestRun StateParameterExampleRun TimeoutExampleRun XMLRemoteStateOffererRun ExampleUnitAppRun ExampleUnitObserverRun StatechartGroupDocGeneratorAppRun StatechartGroupGeneratorAppRun ProfilerObserverAppRun LoggingUnitAppRun";
cmakeVars["ArmarXCore_FOUND"]="1";
cmakeVars["ArmarXCore_ICEGRID_DIR"]="/usr/share/cmake/ArmarXCore/../../..//share/ArmarXCore/icegrid";
cmakeVars["ArmarXCore_INCLUDE_DIRS"]="/usr/share/cmake/ArmarXCore/../../..//include;/usr/share/cmake/ArmarXCore/../../..//include/ArmarXCore/interface/cpp";
cmakeVars["ArmarXCore_INTERFACE_DIRS"]="/usr/share/cmake/ArmarXCore/../../..//share/ArmarXCore/slice";
cmakeVars["ArmarXCore_INTERFACE_LIBRARY"]="ArmarXCoreInterfaces";
cmakeVars["ArmarXCore_JARS"]="ArmarXCoreInterfaces.jar";
cmakeVars["ArmarXCore_JAR_DIR"]="/usr/share/cmake/ArmarXCore/../../..//lib";
cmakeVars["ArmarXCore_LIBRARIES"]="ArmarXCoreInterfaces ArmarXCore ArmarXCoreObservers ArmarXCoreStatechart ArmarXCoreJsonObject ArmarXCoreEigen3Variants";
cmakeVars["ArmarXCore_LIBRARY_DIRS"]="/usr/share/cmake/ArmarXCore/../../..//lib";
cmakeVars["ArmarXCore_PACKAGE_CONFIG_DIR"]="/usr/share/cmake/ArmarXCore";
cmakeVars["ArmarXCore_PACKAGE_DEPENDENCY_PATHS"]="";
cmakeVars["ArmarXCore_SCENARIOS_DIR"]="/usr/share/cmake/ArmarXCore/../../..//share/ArmarXCore/scenarios";
cmakeVars["ArmarXCore_TEMPLATES_DIR"]="/usr/share/cmake/ArmarXCore/../../..//share/ArmarXCore/templates";
cmakeVars["ArmarXCore_USE_FILE"]="/usr/share/cmake/ArmarXCore/../../..//share/ArmarXCore/cmake/UseArmarXCore.cmake";
cmakeVars["ArmarXCore_VERSION"]="0.8.1";
cmakeVars["ArmarXCore_VERSION_COUNT"]="3";
cmakeVars["ArmarXCore_VERSION_MAJOR"]="0";
cmakeVars["ArmarXCore_VERSION_MINOR"]="8";
cmakeVars["ArmarXCore_VERSION_PATCH"]="1";
cmakeVars["ArmarXCore_VERSION_TWEAK"]="0";
cmakeVars["Boost_CONSIDERED_CONFIGS"]="";
cmakeVars["Boost_CONSIDERED_VERSIONS"]="";
cmakeVars["Boost_DIR"]="Boost_DIR-NOTFOUND";
cmakeVars["Boost_ERROR_REASON"]="Boost version: 1.54.0\nBoost include path: /usr/include";
cmakeVars["Boost_FOUND"]="1";
cmakeVars["Boost_INCLUDE_DIR"]="/usr/include";
cmakeVars["Boost_INCLUDE_DIRS"]="/usr/include";
cmakeVars["Boost_LIBRARIES"]="/usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so";
cmakeVars["Boost_LIBRARY_DIR"]="/usr/lib/x86_64-linux-gnu";
cmakeVars["Boost_LIBRARY_DIRS"]="/usr/lib/x86_64-linux-gnu";
cmakeVars["Boost_LIB_PREFIX"]="";
cmakeVars["Boost_LIB_VERSION"]="1_54";
cmakeVars["Boost_MAJOR_VERSION"]="1";
cmakeVars["Boost_MINOR_VERSION"]="54";
cmakeVars["Boost_SUBMINOR_VERSION"]="0";
cmakeVars["Boost_UNIT_TEST_FRAMEWORK_FOUND"]="ON";
cmakeVars["Boost_UNIT_TEST_FRAMEWORK_LIBRARIES"]="/usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so";
cmakeVars["Boost_UNIT_TEST_FRAMEWORK_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so";
cmakeVars["Boost_UNIT_TEST_FRAMEWORK_LIBRARY_DEBUG"]="/usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so";
cmakeVars["Boost_UNIT_TEST_FRAMEWORK_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so";
cmakeVars["Boost_USE_MULTITHREADED"]="TRUE";
cmakeVars["Boost_VERSION"]="105400";
cmakeVars["CHECK_CXX_SOURCE_COMPILES_ADD_INCLUDES"]="-DINCLUDE_DIRECTORIES:STRING=/usr/include";
cmakeVars["CHECK_CXX_SOURCE_COMPILES_ADD_LIBRARIES"]="LINK_LIBRARIES;/usr/lib/x86_64-linux-gnu/libIce.so;/usr/lib/x86_64-linux-gnu/libIceUtil.so";
cmakeVars["CHECK_INCLUDE_FILES_CONTENT"]="/* */\n";
cmakeVars["CHECK_INCLUDE_FILES_INCLUDE_DIRS"]="-DINCLUDE_DIRECTORIES=/usr/include";
cmakeVars["CHECK_LIBRARY_EXISTS_LIBRARIES"]="pthread;/usr/lib/x86_64-linux-gnu/libIce.so;/usr/lib/x86_64-linux-gnu/libIceUtil.so";
cmakeVars["CHECK_SYMBOL_EXISTS_LIBS"]="LINK_LIBRARIES;/usr/lib/x86_64-linux-gnu/libIce.so;/usr/lib/x86_64-linux-gnu/libIceUtil.so";
cmakeVars["CMAKE_AR"]="/usr/bin/ar";
cmakeVars["CMAKE_BASE_NAME"]="g++";
cmakeVars["CMAKE_BINARY_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build";
cmakeVars["CMAKE_BUILD_TOOL"]="/usr/bin/make";
cmakeVars["CMAKE_BUILD_TYPE"]="";
cmakeVars["CMAKE_CFG_INTDIR"]=".";
cmakeVars["CMAKE_COLOR_MAKEFILE"]="ON";
cmakeVars["CMAKE_COMMAND"]="/usr/bin/cmake";
cmakeVars["CMAKE_COMPILER_IS_GNUCC"]="1";
cmakeVars["CMAKE_COMPILER_IS_GNUCXX"]="1";
cmakeVars["CMAKE_CONFIGURABLE_FILE_CONTENT"]="/* */\n#include <pthread.h>\n\nint main(int argc, char** argv)\n{\n  (void)argv;\n#ifndef pthread_create\n  return ((int*)(&pthread_create))[argc];\n#else\n  (void)argc;\n  return 0;\n#endif\n}\n";
cmakeVars["CMAKE_CPACK_COMMAND"]="/usr/bin/cpack";
cmakeVars["CMAKE_CROSSCOMPILING"]="FALSE";
cmakeVars["CMAKE_CTEST_COMMAND"]="/usr/bin/ctest";
cmakeVars["CMAKE_CURRENT_BINARY_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build";
cmakeVars["CMAKE_CURRENT_LIST_DIR"]="/usr/share/ArmarXCore/cmake";
cmakeVars["CMAKE_CURRENT_LIST_FILE"]="/usr/share/ArmarXCore/cmake/Testing.cmake";
cmakeVars["CMAKE_CURRENT_SOURCE_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace";
cmakeVars["CMAKE_CXX_ABI_COMPILED"]="TRUE";
cmakeVars["CMAKE_CXX_ARCHIVE_APPEND"]="<CMAKE_AR> r  <TARGET> <LINK_FLAGS> <OBJECTS>";
cmakeVars["CMAKE_CXX_ARCHIVE_CREATE"]="<CMAKE_AR> cr <TARGET> <LINK_FLAGS> <OBJECTS>";
cmakeVars["CMAKE_CXX_ARCHIVE_FINISH"]="<CMAKE_RANLIB> <TARGET>";
cmakeVars["CMAKE_CXX_COMPILER"]="/usr/bin/c++";
cmakeVars["CMAKE_CXX_COMPILER_ABI"]="ELF";
cmakeVars["CMAKE_CXX_COMPILER_ARG1"]="";
cmakeVars["CMAKE_CXX_COMPILER_ENV_VAR"]="CXX";
cmakeVars["CMAKE_CXX_COMPILER_ID"]="GNU";
cmakeVars["CMAKE_CXX_COMPILER_ID_PLATFORM_CONTENT"]="/* Identify known platforms by name.  */\n#if defined(__linux) || defined(__linux__) || defined(linux)\n# define PLATFORM_ID \"Linux\"\n\n#elif defined(__CYGWIN__)\n# define PLATFORM_ID \"Cygwin\"\n\n#elif defined(__MINGW32__)\n# define PLATFORM_ID \"MinGW\"\n\n#elif defined(__APPLE__)\n# define PLATFORM_ID \"Darwin\"\n\n#elif defined(_WIN32) || defined(__WIN32__) || defined(WIN32)\n# define PLATFORM_ID \"Windows\"\n\n#elif defined(__FreeBSD__) || defined(__FreeBSD)\n# define PLATFORM_ID \"FreeBSD\"\n\n#elif defined(__NetBSD__) || defined(__NetBSD)\n# define PLATFORM_ID \"NetBSD\"\n\n#elif defined(__OpenBSD__) || defined(__OPENBSD)\n# define PLATFORM_ID \"OpenBSD\"\n\n#elif defined(__sun) || defined(sun)\n# define PLATFORM_ID \"SunOS\"\n\n#elif defined(_AIX) || defined(__AIX) || defined(__AIX__) || defined(__aix) || defined(__aix__)\n# define PLATFORM_ID \"AIX\"\n\n#elif defined(__sgi) || defined(__sgi__) || defined(_SGI)\n# define PLATFORM_ID \"IRIX\"\n\n#elif defined(__hpux) || defined(__hpux__)\n# define PLATFORM_ID \"HP-UX\"\n\n#elif defined(__HAIKU__)\n# define PLATFORM_ID \"Haiku\"\n\n#elif defined(__BeOS) || defined(__BEOS__) || defined(_BEOS)\n# define PLATFORM_ID \"BeOS\"\n\n#elif defined(__QNX__) || defined(__QNXNTO__)\n# define PLATFORM_ID \"QNX\"\n\n#elif defined(__tru64) || defined(_tru64) || defined(__TRU64__)\n# define PLATFORM_ID \"Tru64\"\n\n#elif defined(__riscos) || defined(__riscos__)\n# define PLATFORM_ID \"RISCos\"\n\n#elif defined(__sinix) || defined(__sinix__) || defined(__SINIX__)\n# define PLATFORM_ID \"SINIX\"\n\n#elif defined(__UNIX_SV__)\n# define PLATFORM_ID \"UNIX_SV\"\n\n#elif defined(__bsdos__)\n# define PLATFORM_ID \"BSDOS\"\n\n#elif defined(_MPRAS) || defined(MPRAS)\n# define PLATFORM_ID \"MP-RAS\"\n\n#elif defined(__osf) || defined(__osf__)\n# define PLATFORM_ID \"OSF1\"\n\n#elif defined(_SCO_SV) || defined(SCO_SV) || defined(sco_sv)\n# define PLATFORM_ID \"SCO_SV\"\n\n#elif defined(__ultrix) || defined(__ultrix__) || defined(_ULTRIX)\n# define PLATFORM_ID \"ULTRIX\"\n\n#elif defined(__XENIX__) || defined(_XENIX) || defined(XENIX)\n# define PLATFORM_ID \"Xenix\"\n\n#else /* unknown platform */\n# define PLATFORM_ID \"\"\n\n#endif\n\n/* For windows compilers MSVC and Intel we can determine\n   the architecture of the compiler being used.  This is because\n   the compilers do not have flags that can change the architecture,\n   but rather depend on which compiler is being used\n*/\n#if defined(_WIN32) && defined(_MSC_VER)\n# if defined(_M_IA64)\n#  define ARCHITECTURE_ID \"IA64\"\n\n# elif defined(_M_X64) || defined(_M_AMD64)\n#  define ARCHITECTURE_ID \"x64\"\n\n# elif defined(_M_IX86)\n#  define ARCHITECTURE_ID \"X86\"\n\n# elif defined(_M_ARM)\n#  define ARCHITECTURE_ID \"ARM\"\n\n# elif defined(_M_MIPS)\n#  define ARCHITECTURE_ID \"MIPS\"\n\n# elif defined(_M_SH)\n#  define ARCHITECTURE_ID \"SHx\"\n\n# else /* unknown architecture */\n#  define ARCHITECTURE_ID \"\"\n# endif\n\n#else\n#  define ARCHITECTURE_ID \"\"\n#endif\n\n/* Convert integer to decimal digit literals.  */\n#define DEC(n)                   \\\n  ('0' + (((n) / 10000000)%10)), \\\n  ('0' + (((n) / 1000000)%10)),  \\\n  ('0' + (((n) / 100000)%10)),   \\\n  ('0' + (((n) / 10000)%10)),    \\\n  ('0' + (((n) / 1000)%10)),     \\\n  ('0' + (((n) / 100)%10)),      \\\n  ('0' + (((n) / 10)%10)),       \\\n  ('0' +  ((n) % 10))\n\n/* Convert integer to hex digit literals.  */\n#define HEX(n)             \\\n  ('0' + ((n)>>28 & 0xF)), \\\n  ('0' + ((n)>>24 & 0xF)), \\\n  ('0' + ((n)>>20 & 0xF)), \\\n  ('0' + ((n)>>16 & 0xF)), \\\n  ('0' + ((n)>>12 & 0xF)), \\\n  ('0' + ((n)>>8  & 0xF)), \\\n  ('0' + ((n)>>4  & 0xF)), \\\n  ('0' + ((n)     & 0xF))\n\n/* Construct a string literal encoding the version number components. */\n#ifdef COMPILER_VERSION_MAJOR\nchar const info_version[] = {\n  'I', 'N', 'F', 'O', ':',\n  'c','o','m','p','i','l','e','r','_','v','e','r','s','i','o','n','[',\n  COMPILER_VERSION_MAJOR,\n# ifdef COMPILER_VERSION_MINOR\n  '.', COMPILER_VERSION_MINOR,\n#  ifdef COMPILER_VERSION_PATCH\n   '.', COMPILER_VERSION_PATCH,\n#   ifdef COMPILER_VERSION_TWEAK\n    '.', COMPILER_VERSION_TWEAK,\n#   endif\n#  endif\n# endif\n  ']','\\0'};\n#endif\n\n/* Construct the string literal in pieces to prevent the source from\n   getting matched.  Store it in a pointer rather than an array\n   because some compilers will just produce instructions to fill the\n   array rather than assigning a pointer to a static array.  */\nchar const* info_platform = \"INFO\" \":\" \"platform[\" PLATFORM_ID \"]\";\nchar const* info_arch = \"INFO\" \":\" \"arch[\" ARCHITECTURE_ID \"]\";\n\n";
cmakeVars["CMAKE_CXX_COMPILER_ID_RUN"]="1";
cmakeVars["CMAKE_CXX_COMPILER_ID_TEST_FLAGS"]="-c";
cmakeVars["CMAKE_CXX_COMPILER_ID_VENDORS"]="IAR";
cmakeVars["CMAKE_CXX_COMPILER_ID_VENDOR_REGEX_IAR"]="IAR .+ Compiler";
cmakeVars["CMAKE_CXX_COMPILER_INIT"]="NOTFOUND";
cmakeVars["CMAKE_CXX_COMPILER_LIST"]="c++;CC;g++;aCC;cl;bcc;xlC;clang++";
cmakeVars["CMAKE_CXX_COMPILER_LOADED"]="1";
cmakeVars["CMAKE_CXX_COMPILER_NAMES"]="c++";
cmakeVars["CMAKE_CXX_COMPILER_VERSION"]="4.8.4";
cmakeVars["CMAKE_CXX_COMPILER_WORKS"]="TRUE";
cmakeVars["CMAKE_CXX_COMPILE_OBJECT"]="<CMAKE_CXX_COMPILER>  <DEFINES> <FLAGS> -o <OBJECT> -c <SOURCE>";
cmakeVars["CMAKE_CXX_COMPILE_OPTIONS_PIC"]="-fPIC";
cmakeVars["CMAKE_CXX_COMPILE_OPTIONS_PIE"]="-fPIE";
cmakeVars["CMAKE_CXX_COMPILE_OPTIONS_VISIBILITY"]="-fvisibility=";
cmakeVars["CMAKE_CXX_COMPILE_OPTIONS_VISIBILITY_INLINES_HIDDEN"]="-fvisibility-inlines-hidden";
cmakeVars["CMAKE_CXX_CREATE_ASSEMBLY_SOURCE"]="<CMAKE_CXX_COMPILER> <DEFINES> <FLAGS> -S <SOURCE> -o <ASSEMBLY_SOURCE>";
cmakeVars["CMAKE_CXX_CREATE_PREPROCESSED_SOURCE"]="<CMAKE_CXX_COMPILER> <DEFINES> <FLAGS> -E <SOURCE> > <PREPROCESSED_SOURCE>";
cmakeVars["CMAKE_CXX_CREATE_SHARED_LIBRARY"]="<CMAKE_CXX_COMPILER> <CMAKE_SHARED_LIBRARY_CXX_FLAGS> <LANGUAGE_COMPILE_FLAGS> <LINK_FLAGS> <CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS> <SONAME_FLAG><TARGET_SONAME> -o <TARGET> <OBJECTS> <LINK_LIBRARIES>";
cmakeVars["CMAKE_CXX_CREATE_SHARED_MODULE"]="<CMAKE_CXX_COMPILER> <CMAKE_SHARED_LIBRARY_CXX_FLAGS> <LANGUAGE_COMPILE_FLAGS> <LINK_FLAGS> <CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS> <SONAME_FLAG><TARGET_SONAME> -o <TARGET> <OBJECTS> <LINK_LIBRARIES>";
cmakeVars["CMAKE_CXX_FLAGS"]="";
cmakeVars["CMAKE_CXX_FLAGS_DEBUG"]="-g";
cmakeVars["CMAKE_CXX_FLAGS_DEBUG_INIT"]="-g";
cmakeVars["CMAKE_CXX_FLAGS_MINSIZEREL"]="-Os -DNDEBUG";
cmakeVars["CMAKE_CXX_FLAGS_MINSIZEREL_INIT"]="-Os -DNDEBUG";
cmakeVars["CMAKE_CXX_FLAGS_RELEASE"]="-O3 -DNDEBUG";
cmakeVars["CMAKE_CXX_FLAGS_RELEASE_INIT"]="-O3 -DNDEBUG";
cmakeVars["CMAKE_CXX_FLAGS_RELWITHDEBINFO"]="-O2 -g -DNDEBUG";
cmakeVars["CMAKE_CXX_FLAGS_RELWITHDEBINFO_INIT"]="-O2 -g -DNDEBUG";
cmakeVars["CMAKE_CXX_IGNORE_EXTENSIONS"]="inl;h;hpp;HPP;H;o;O;obj;OBJ;def;DEF;rc;RC";
cmakeVars["CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES"]="/usr/include";
cmakeVars["CMAKE_CXX_IMPLICIT_LINK_DIRECTORIES"]="/usr/lib/gcc/x86_64-linux-gnu/4.8;/usr/lib/x86_64-linux-gnu;/usr/lib;/lib/x86_64-linux-gnu;/lib";
cmakeVars["CMAKE_CXX_IMPLICIT_LINK_FRAMEWORK_DIRECTORIES"]="";
cmakeVars["CMAKE_CXX_IMPLICIT_LINK_LIBRARIES"]="stdc++;m;c";
cmakeVars["CMAKE_CXX_INFORMATION_LOADED"]="1";
cmakeVars["CMAKE_CXX_LIBRARY_ARCHITECTURE"]="x86_64-linux-gnu";
cmakeVars["CMAKE_CXX_LINKER_PREFERENCE"]="30";
cmakeVars["CMAKE_CXX_LINKER_PREFERENCE_PROPAGATES"]="1";
cmakeVars["CMAKE_CXX_LINK_EXECUTABLE"]="<CMAKE_CXX_COMPILER>  <FLAGS> <CMAKE_CXX_LINK_FLAGS> <LINK_FLAGS> <OBJECTS>  -o <TARGET> <LINK_LIBRARIES>";
cmakeVars["CMAKE_CXX_OUTPUT_EXTENSION"]=".o";
cmakeVars["CMAKE_CXX_PLATFORM_ID"]="Linux";
cmakeVars["CMAKE_CXX_SIZEOF_DATA_PTR"]="8";
cmakeVars["CMAKE_CXX_SOURCE_FILE_EXTENSIONS"]="C;M;c++;cc;cpp;cxx;m;mm;CPP";
cmakeVars["CMAKE_CXX_VERBOSE_FLAG"]="-v";
cmakeVars["CMAKE_C_ABI_COMPILED"]="TRUE";
cmakeVars["CMAKE_C_ARCHIVE_APPEND"]="<CMAKE_AR> r  <TARGET> <LINK_FLAGS> <OBJECTS>";
cmakeVars["CMAKE_C_ARCHIVE_CREATE"]="<CMAKE_AR> cr <TARGET> <LINK_FLAGS> <OBJECTS>";
cmakeVars["CMAKE_C_ARCHIVE_FINISH"]="<CMAKE_RANLIB> <TARGET>";
cmakeVars["CMAKE_C_COMPILER"]="/usr/bin/cc";
cmakeVars["CMAKE_C_COMPILER_ABI"]="ELF";
cmakeVars["CMAKE_C_COMPILER_ARG1"]="";
cmakeVars["CMAKE_C_COMPILER_ENV_VAR"]="CC";
cmakeVars["CMAKE_C_COMPILER_ID"]="GNU";
cmakeVars["CMAKE_C_COMPILER_ID_PLATFORM_CONTENT"]="/* Identify known platforms by name.  */\n#if defined(__linux) || defined(__linux__) || defined(linux)\n# define PLATFORM_ID \"Linux\"\n\n#elif defined(__CYGWIN__)\n# define PLATFORM_ID \"Cygwin\"\n\n#elif defined(__MINGW32__)\n# define PLATFORM_ID \"MinGW\"\n\n#elif defined(__APPLE__)\n# define PLATFORM_ID \"Darwin\"\n\n#elif defined(_WIN32) || defined(__WIN32__) || defined(WIN32)\n# define PLATFORM_ID \"Windows\"\n\n#elif defined(__FreeBSD__) || defined(__FreeBSD)\n# define PLATFORM_ID \"FreeBSD\"\n\n#elif defined(__NetBSD__) || defined(__NetBSD)\n# define PLATFORM_ID \"NetBSD\"\n\n#elif defined(__OpenBSD__) || defined(__OPENBSD)\n# define PLATFORM_ID \"OpenBSD\"\n\n#elif defined(__sun) || defined(sun)\n# define PLATFORM_ID \"SunOS\"\n\n#elif defined(_AIX) || defined(__AIX) || defined(__AIX__) || defined(__aix) || defined(__aix__)\n# define PLATFORM_ID \"AIX\"\n\n#elif defined(__sgi) || defined(__sgi__) || defined(_SGI)\n# define PLATFORM_ID \"IRIX\"\n\n#elif defined(__hpux) || defined(__hpux__)\n# define PLATFORM_ID \"HP-UX\"\n\n#elif defined(__HAIKU__)\n# define PLATFORM_ID \"Haiku\"\n\n#elif defined(__BeOS) || defined(__BEOS__) || defined(_BEOS)\n# define PLATFORM_ID \"BeOS\"\n\n#elif defined(__QNX__) || defined(__QNXNTO__)\n# define PLATFORM_ID \"QNX\"\n\n#elif defined(__tru64) || defined(_tru64) || defined(__TRU64__)\n# define PLATFORM_ID \"Tru64\"\n\n#elif defined(__riscos) || defined(__riscos__)\n# define PLATFORM_ID \"RISCos\"\n\n#elif defined(__sinix) || defined(__sinix__) || defined(__SINIX__)\n# define PLATFORM_ID \"SINIX\"\n\n#elif defined(__UNIX_SV__)\n# define PLATFORM_ID \"UNIX_SV\"\n\n#elif defined(__bsdos__)\n# define PLATFORM_ID \"BSDOS\"\n\n#elif defined(_MPRAS) || defined(MPRAS)\n# define PLATFORM_ID \"MP-RAS\"\n\n#elif defined(__osf) || defined(__osf__)\n# define PLATFORM_ID \"OSF1\"\n\n#elif defined(_SCO_SV) || defined(SCO_SV) || defined(sco_sv)\n# define PLATFORM_ID \"SCO_SV\"\n\n#elif defined(__ultrix) || defined(__ultrix__) || defined(_ULTRIX)\n# define PLATFORM_ID \"ULTRIX\"\n\n#elif defined(__XENIX__) || defined(_XENIX) || defined(XENIX)\n# define PLATFORM_ID \"Xenix\"\n\n#else /* unknown platform */\n# define PLATFORM_ID \"\"\n\n#endif\n\n/* For windows compilers MSVC and Intel we can determine\n   the architecture of the compiler being used.  This is because\n   the compilers do not have flags that can change the architecture,\n   but rather depend on which compiler is being used\n*/\n#if defined(_WIN32) && defined(_MSC_VER)\n# if defined(_M_IA64)\n#  define ARCHITECTURE_ID \"IA64\"\n\n# elif defined(_M_X64) || defined(_M_AMD64)\n#  define ARCHITECTURE_ID \"x64\"\n\n# elif defined(_M_IX86)\n#  define ARCHITECTURE_ID \"X86\"\n\n# elif defined(_M_ARM)\n#  define ARCHITECTURE_ID \"ARM\"\n\n# elif defined(_M_MIPS)\n#  define ARCHITECTURE_ID \"MIPS\"\n\n# elif defined(_M_SH)\n#  define ARCHITECTURE_ID \"SHx\"\n\n# else /* unknown architecture */\n#  define ARCHITECTURE_ID \"\"\n# endif\n\n#else\n#  define ARCHITECTURE_ID \"\"\n#endif\n\n/* Convert integer to decimal digit literals.  */\n#define DEC(n)                   \\\n  ('0' + (((n) / 10000000)%10)), \\\n  ('0' + (((n) / 1000000)%10)),  \\\n  ('0' + (((n) / 100000)%10)),   \\\n  ('0' + (((n) / 10000)%10)),    \\\n  ('0' + (((n) / 1000)%10)),     \\\n  ('0' + (((n) / 100)%10)),      \\\n  ('0' + (((n) / 10)%10)),       \\\n  ('0' +  ((n) % 10))\n\n/* Convert integer to hex digit literals.  */\n#define HEX(n)             \\\n  ('0' + ((n)>>28 & 0xF)), \\\n  ('0' + ((n)>>24 & 0xF)), \\\n  ('0' + ((n)>>20 & 0xF)), \\\n  ('0' + ((n)>>16 & 0xF)), \\\n  ('0' + ((n)>>12 & 0xF)), \\\n  ('0' + ((n)>>8  & 0xF)), \\\n  ('0' + ((n)>>4  & 0xF)), \\\n  ('0' + ((n)     & 0xF))\n\n/* Construct a string literal encoding the version number components. */\n#ifdef COMPILER_VERSION_MAJOR\nchar const info_version[] = {\n  'I', 'N', 'F', 'O', ':',\n  'c','o','m','p','i','l','e','r','_','v','e','r','s','i','o','n','[',\n  COMPILER_VERSION_MAJOR,\n# ifdef COMPILER_VERSION_MINOR\n  '.', COMPILER_VERSION_MINOR,\n#  ifdef COMPILER_VERSION_PATCH\n   '.', COMPILER_VERSION_PATCH,\n#   ifdef COMPILER_VERSION_TWEAK\n    '.', COMPILER_VERSION_TWEAK,\n#   endif\n#  endif\n# endif\n  ']','\\0'};\n#endif\n\n/* Construct the string literal in pieces to prevent the source from\n   getting matched.  Store it in a pointer rather than an array\n   because some compilers will just produce instructions to fill the\n   array rather than assigning a pointer to a static array.  */\nchar const* info_platform = \"INFO\" \":\" \"platform[\" PLATFORM_ID \"]\";\nchar const* info_arch = \"INFO\" \":\" \"arch[\" ARCHITECTURE_ID \"]\";\n\n";
cmakeVars["CMAKE_C_COMPILER_ID_RUN"]="1";
cmakeVars["CMAKE_C_COMPILER_ID_TEST_FLAGS"]="-c;-Aa";
cmakeVars["CMAKE_C_COMPILER_ID_VENDORS"]="IAR";
cmakeVars["CMAKE_C_COMPILER_ID_VENDOR_REGEX_IAR"]="IAR .+ Compiler";
cmakeVars["CMAKE_C_COMPILER_INIT"]="NOTFOUND";
cmakeVars["CMAKE_C_COMPILER_LIST"]="cc;gcc;cl;bcc;xlc;clang";
cmakeVars["CMAKE_C_COMPILER_LOADED"]="1";
cmakeVars["CMAKE_C_COMPILER_NAMES"]="cc";
cmakeVars["CMAKE_C_COMPILER_VERSION"]="4.8.4";
cmakeVars["CMAKE_C_COMPILER_WORKS"]="TRUE";
cmakeVars["CMAKE_C_COMPILE_OBJECT"]="<CMAKE_C_COMPILER> <DEFINES> <FLAGS> -o <OBJECT>   -c <SOURCE>";
cmakeVars["CMAKE_C_COMPILE_OPTIONS_PIC"]="-fPIC";
cmakeVars["CMAKE_C_COMPILE_OPTIONS_PIE"]="-fPIE";
cmakeVars["CMAKE_C_COMPILE_OPTIONS_VISIBILITY"]="-fvisibility=";
cmakeVars["CMAKE_C_CREATE_ASSEMBLY_SOURCE"]="<CMAKE_C_COMPILER> <DEFINES> <FLAGS> -S <SOURCE> -o <ASSEMBLY_SOURCE>";
cmakeVars["CMAKE_C_CREATE_PREPROCESSED_SOURCE"]="<CMAKE_C_COMPILER> <DEFINES> <FLAGS> -E <SOURCE> > <PREPROCESSED_SOURCE>";
cmakeVars["CMAKE_C_CREATE_SHARED_LIBRARY"]="<CMAKE_C_COMPILER> <CMAKE_SHARED_LIBRARY_C_FLAGS> <LANGUAGE_COMPILE_FLAGS> <LINK_FLAGS> <CMAKE_SHARED_LIBRARY_CREATE_C_FLAGS> <SONAME_FLAG><TARGET_SONAME> -o <TARGET> <OBJECTS> <LINK_LIBRARIES>";
cmakeVars["CMAKE_C_CREATE_SHARED_MODULE"]="<CMAKE_C_COMPILER> <CMAKE_SHARED_LIBRARY_C_FLAGS> <LANGUAGE_COMPILE_FLAGS> <LINK_FLAGS> <CMAKE_SHARED_LIBRARY_CREATE_C_FLAGS> <SONAME_FLAG><TARGET_SONAME> -o <TARGET> <OBJECTS> <LINK_LIBRARIES>";
cmakeVars["CMAKE_C_FLAGS"]="";
cmakeVars["CMAKE_C_FLAGS_DEBUG"]="-g";
cmakeVars["CMAKE_C_FLAGS_DEBUG_INIT"]="-g";
cmakeVars["CMAKE_C_FLAGS_MINSIZEREL"]="-Os -DNDEBUG";
cmakeVars["CMAKE_C_FLAGS_MINSIZEREL_INIT"]="-Os -DNDEBUG";
cmakeVars["CMAKE_C_FLAGS_RELEASE"]="-O3 -DNDEBUG";
cmakeVars["CMAKE_C_FLAGS_RELEASE_INIT"]="-O3 -DNDEBUG";
cmakeVars["CMAKE_C_FLAGS_RELWITHDEBINFO"]="-O2 -g -DNDEBUG";
cmakeVars["CMAKE_C_FLAGS_RELWITHDEBINFO_INIT"]="-O2 -g -DNDEBUG";
cmakeVars["CMAKE_C_IGNORE_EXTENSIONS"]="h;H;o;O;obj;OBJ;def;DEF;rc;RC";
cmakeVars["CMAKE_C_IMPLICIT_INCLUDE_DIRECTORIES"]="/usr/include";
cmakeVars["CMAKE_C_IMPLICIT_LINK_DIRECTORIES"]="/usr/lib/gcc/x86_64-linux-gnu/4.8;/usr/lib/x86_64-linux-gnu;/usr/lib;/lib/x86_64-linux-gnu;/lib";
cmakeVars["CMAKE_C_IMPLICIT_LINK_FRAMEWORK_DIRECTORIES"]="";
cmakeVars["CMAKE_C_IMPLICIT_LINK_LIBRARIES"]="c";
cmakeVars["CMAKE_C_INFORMATION_LOADED"]="1";
cmakeVars["CMAKE_C_LIBRARY_ARCHITECTURE"]="x86_64-linux-gnu";
cmakeVars["CMAKE_C_LINKER_PREFERENCE"]="10";
cmakeVars["CMAKE_C_LINK_EXECUTABLE"]="<CMAKE_C_COMPILER> <FLAGS> <CMAKE_C_LINK_FLAGS> <LINK_FLAGS> <OBJECTS>  -o <TARGET> <LINK_LIBRARIES>";
cmakeVars["CMAKE_C_OUTPUT_EXTENSION"]=".o";
cmakeVars["CMAKE_C_PLATFORM_ID"]="Linux";
cmakeVars["CMAKE_C_SIZEOF_DATA_PTR"]="8";
cmakeVars["CMAKE_C_SOURCE_FILE_EXTENSIONS"]="c";
cmakeVars["CMAKE_C_VERBOSE_FLAG"]="-v";
cmakeVars["CMAKE_DEPFILE_FLAGS_C"]="-MMD -MT <OBJECT> -MF <DEPFILE>";
cmakeVars["CMAKE_DEPFILE_FLAGS_CXX"]="-MMD -MT <OBJECT> -MF <DEPFILE>";
cmakeVars["CMAKE_DL_LIBS"]="dl";
cmakeVars["CMAKE_EDIT_COMMAND"]="/usr/bin/cmake-gui";
cmakeVars["CMAKE_EXECUTABLE_FORMAT"]="ELF";
cmakeVars["CMAKE_EXECUTABLE_RPATH_LINK_CXX_FLAG"]="-Wl,-rpath-link,";
cmakeVars["CMAKE_EXECUTABLE_RPATH_LINK_C_FLAG"]="-Wl,-rpath-link,";
cmakeVars["CMAKE_EXECUTABLE_RUNTIME_CXX_FLAG"]="-Wl,-rpath,";
cmakeVars["CMAKE_EXECUTABLE_RUNTIME_CXX_FLAG_SEP"]=":";
cmakeVars["CMAKE_EXECUTABLE_RUNTIME_C_FLAG"]="-Wl,-rpath,";
cmakeVars["CMAKE_EXECUTABLE_RUNTIME_C_FLAG_SEP"]=":";
cmakeVars["CMAKE_EXECUTABLE_SUFFIX"]="";
cmakeVars["CMAKE_EXE_EXPORTS_CXX_FLAG"]="-Wl,--export-dynamic";
cmakeVars["CMAKE_EXE_EXPORTS_C_FLAG"]="-Wl,--export-dynamic";
cmakeVars["CMAKE_EXE_LINKER_FLAGS"]=" ";
cmakeVars["CMAKE_EXE_LINKER_FLAGS_DEBUG"]="";
cmakeVars["CMAKE_EXE_LINKER_FLAGS_MINSIZEREL"]="";
cmakeVars["CMAKE_EXE_LINKER_FLAGS_RELEASE"]="";
cmakeVars["CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO"]="";
cmakeVars["CMAKE_EXE_LINK_DYNAMIC_CXX_FLAGS"]="-Wl,-Bdynamic";
cmakeVars["CMAKE_EXE_LINK_DYNAMIC_C_FLAGS"]="-Wl,-Bdynamic";
cmakeVars["CMAKE_EXE_LINK_STATIC_CXX_FLAGS"]="-Wl,-Bstatic";
cmakeVars["CMAKE_EXE_LINK_STATIC_C_FLAGS"]="-Wl,-Bstatic";
cmakeVars["CMAKE_EXPORT_COMPILE_COMMANDS"]="OFF";
cmakeVars["CMAKE_EXTRA_GENERATOR"]="";
cmakeVars["CMAKE_FILES_DIRECTORY"]="/CMakeFiles";
cmakeVars["CMAKE_FIND_LIBRARY_PREFIXES"]="lib";
cmakeVars["CMAKE_FIND_LIBRARY_SUFFIXES"]=".so.34;.34.dylib;.so;.a";
cmakeVars["CMAKE_GENERATOR"]="Unix Makefiles";
cmakeVars["CMAKE_GENERATOR_TOOLSET"]="";
cmakeVars["CMAKE_HAVE_LIBC_CREATE"]="";
cmakeVars["CMAKE_HAVE_PTHREADS_CREATE"]="";
cmakeVars["CMAKE_HAVE_PTHREAD_CREATE"]="1";
cmakeVars["CMAKE_HAVE_PTHREAD_H"]="1";
cmakeVars["CMAKE_HAVE_THREADS_LIBRARY"]="1";
cmakeVars["CMAKE_HOME_DIRECTORY"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace";
cmakeVars["CMAKE_HOST_SYSTEM"]="Linux-3.19.0-51-generic";
cmakeVars["CMAKE_HOST_SYSTEM_NAME"]="Linux";
cmakeVars["CMAKE_HOST_SYSTEM_PROCESSOR"]="x86_64";
cmakeVars["CMAKE_HOST_SYSTEM_VERSION"]="3.19.0-51-generic";
cmakeVars["CMAKE_HOST_UNIX"]="1";
cmakeVars["CMAKE_INCLUDE_FLAG_C"]="-I";
cmakeVars["CMAKE_INCLUDE_FLAG_CXX"]="-I";
cmakeVars["CMAKE_INCLUDE_FLAG_C_SEP"]="";
cmakeVars["CMAKE_INCLUDE_SYSTEM_FLAG_C"]="-isystem ";
cmakeVars["CMAKE_INCLUDE_SYSTEM_FLAG_CXX"]="-isystem ";
cmakeVars["CMAKE_INSTALL_DEFAULT_COMPONENT_NAME"]="Unspecified";
cmakeVars["CMAKE_INSTALL_PREFIX"]="/usr/local";
cmakeVars["CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT"]="1";
cmakeVars["CMAKE_INSTALL_SO_NO_EXE"]="1";
cmakeVars["CMAKE_INTERNAL_PLATFORM_ABI"]="ELF";
cmakeVars["CMAKE_LIBRARY_ARCHITECTURE"]="x86_64-linux-gnu";
cmakeVars["CMAKE_LIBRARY_ARCHITECTURE_REGEX"]="[a-z0-9_]+(-[a-z0-9_]+)?-linux-gnu[a-z0-9_]*";
cmakeVars["CMAKE_LIBRARY_PATH_FLAG"]="-L";
cmakeVars["CMAKE_LIBRARY_PATH_TERMINATOR"]="";
cmakeVars["CMAKE_LINKER"]="/usr/bin/ld";
cmakeVars["CMAKE_LINK_LIBRARY_FLAG"]="-l";
cmakeVars["CMAKE_LINK_LIBRARY_SUFFIX"]="";
cmakeVars["CMAKE_MAJOR_VERSION"]="2";
cmakeVars["CMAKE_MAKE_PROGRAM"]="/usr/bin/make";
cmakeVars["CMAKE_MATCH_0"]="";
cmakeVars["CMAKE_MATCH_1"]="";
cmakeVars["CMAKE_MATCH_2"]="";
cmakeVars["CMAKE_MATCH_3"]="";
cmakeVars["CMAKE_MINIMUM_REQUIRED_VERSION"]="2.8";
cmakeVars["CMAKE_MINOR_VERSION"]="8";
cmakeVars["CMAKE_MODULE_LINKER_FLAGS"]=" ";
cmakeVars["CMAKE_MODULE_LINKER_FLAGS_DEBUG"]="";
cmakeVars["CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL"]="";
cmakeVars["CMAKE_MODULE_LINKER_FLAGS_RELEASE"]="";
cmakeVars["CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO"]="";
cmakeVars["CMAKE_MODULE_PATH"]="/usr/share/cmake/ArmarXCore/../../..//share/ArmarXCore/cmake;/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/etc/cmake/";
cmakeVars["CMAKE_NM"]="/usr/bin/nm";
cmakeVars["CMAKE_OBJCOPY"]="/usr/bin/objcopy";
cmakeVars["CMAKE_OBJDUMP"]="/usr/bin/objdump";
cmakeVars["CMAKE_PARENT_LIST_FILE"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/CMakeLists.txt";
cmakeVars["CMAKE_PATCH_VERSION"]="12";
cmakeVars["CMAKE_PLATFORM_IMPLICIT_LINK_DIRECTORIES"]="/lib;/usr/lib;/usr/lib32;/usr/lib64";
cmakeVars["CMAKE_PLATFORM_INFO_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/CMakeFiles/2.8.12.2";
cmakeVars["CMAKE_PLATFORM_USES_PATH_WHEN_NO_SONAME"]="1";
cmakeVars["CMAKE_PROJECT_NAME"]="SecondHandsY1PickAndPlace";
cmakeVars["CMAKE_RANLIB"]="/usr/bin/ranlib";
cmakeVars["CMAKE_REQUIRED_INCLUDES"]="/usr/include";
cmakeVars["CMAKE_REQUIRED_LIBRARIES"]="/usr/lib/x86_64-linux-gnu/libIce.so;/usr/lib/x86_64-linux-gnu/libIceUtil.so";
cmakeVars["CMAKE_ROOT"]="/usr/share/cmake-2.8";
cmakeVars["CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS"]="-shared";
cmakeVars["CMAKE_SHARED_LIBRARY_CREATE_C_FLAGS"]="-shared";
cmakeVars["CMAKE_SHARED_LIBRARY_CXX_FLAGS"]="-fPIC";
cmakeVars["CMAKE_SHARED_LIBRARY_C_FLAGS"]="-fPIC";
cmakeVars["CMAKE_SHARED_LIBRARY_LINK_CXX_FLAGS"]="-rdynamic";
cmakeVars["CMAKE_SHARED_LIBRARY_LINK_C_FLAGS"]="-rdynamic";
cmakeVars["CMAKE_SHARED_LIBRARY_LINK_DYNAMIC_CXX_FLAGS"]="-Wl,-Bdynamic";
cmakeVars["CMAKE_SHARED_LIBRARY_LINK_DYNAMIC_C_FLAGS"]="-Wl,-Bdynamic";
cmakeVars["CMAKE_SHARED_LIBRARY_LINK_STATIC_CXX_FLAGS"]="-Wl,-Bstatic";
cmakeVars["CMAKE_SHARED_LIBRARY_LINK_STATIC_C_FLAGS"]="-Wl,-Bstatic";
cmakeVars["CMAKE_SHARED_LIBRARY_PREFIX"]="lib";
cmakeVars["CMAKE_SHARED_LIBRARY_RPATH_LINK_CXX_FLAG"]="-Wl,-rpath-link,";
cmakeVars["CMAKE_SHARED_LIBRARY_RPATH_LINK_C_FLAG"]="-Wl,-rpath-link,";
cmakeVars["CMAKE_SHARED_LIBRARY_RUNTIME_CXX_FLAG"]="-Wl,-rpath,";
cmakeVars["CMAKE_SHARED_LIBRARY_RUNTIME_CXX_FLAG_SEP"]=":";
cmakeVars["CMAKE_SHARED_LIBRARY_RUNTIME_C_FLAG"]="-Wl,-rpath,";
cmakeVars["CMAKE_SHARED_LIBRARY_RUNTIME_C_FLAG_SEP"]=":";
cmakeVars["CMAKE_SHARED_LIBRARY_SONAME_CXX_FLAG"]="-Wl,-soname,";
cmakeVars["CMAKE_SHARED_LIBRARY_SONAME_C_FLAG"]="-Wl,-soname,";
cmakeVars["CMAKE_SHARED_LIBRARY_SUFFIX"]=".so";
cmakeVars["CMAKE_SHARED_LINKER_FLAGS"]=" ";
cmakeVars["CMAKE_SHARED_LINKER_FLAGS_DEBUG"]="";
cmakeVars["CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL"]="";
cmakeVars["CMAKE_SHARED_LINKER_FLAGS_RELEASE"]="";
cmakeVars["CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO"]="";
cmakeVars["CMAKE_SHARED_MODULE_CREATE_CXX_FLAGS"]="-shared";
cmakeVars["CMAKE_SHARED_MODULE_CREATE_C_FLAGS"]="-shared";
cmakeVars["CMAKE_SHARED_MODULE_CXX_FLAGS"]="-fPIC";
cmakeVars["CMAKE_SHARED_MODULE_C_FLAGS"]="-fPIC";
cmakeVars["CMAKE_SHARED_MODULE_LINK_DYNAMIC_CXX_FLAGS"]="-Wl,-Bdynamic";
cmakeVars["CMAKE_SHARED_MODULE_LINK_DYNAMIC_C_FLAGS"]="-Wl,-Bdynamic";
cmakeVars["CMAKE_SHARED_MODULE_LINK_STATIC_CXX_FLAGS"]="-Wl,-Bstatic";
cmakeVars["CMAKE_SHARED_MODULE_LINK_STATIC_C_FLAGS"]="-Wl,-Bstatic";
cmakeVars["CMAKE_SHARED_MODULE_PREFIX"]="lib";
cmakeVars["CMAKE_SHARED_MODULE_SUFFIX"]=".so";
cmakeVars["CMAKE_SIZEOF_VOID_P"]="8";
cmakeVars["CMAKE_SKIP_INSTALL_RPATH"]="NO";
cmakeVars["CMAKE_SKIP_RPATH"]="NO";
cmakeVars["CMAKE_SOURCE_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace";
cmakeVars["CMAKE_STATIC_LIBRARY_PREFIX"]="lib";
cmakeVars["CMAKE_STATIC_LIBRARY_SUFFIX"]=".a";
cmakeVars["CMAKE_STATIC_LINKER_FLAGS"]="";
cmakeVars["CMAKE_STATIC_LINKER_FLAGS_DEBUG"]="";
cmakeVars["CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL"]="";
cmakeVars["CMAKE_STATIC_LINKER_FLAGS_RELEASE"]="";
cmakeVars["CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO"]="";
cmakeVars["CMAKE_STRIP"]="/usr/bin/strip";
cmakeVars["CMAKE_SYMBOL_EXISTS_INCLUDES"]="-DINCLUDE_DIRECTORIES:STRING=/usr/include";
cmakeVars["CMAKE_SYSTEM"]="Linux-3.19.0-51-generic";
cmakeVars["CMAKE_SYSTEM_INCLUDE_PATH"]="/usr/include/w32api;/usr/X11R6/include;/usr/include/X11;/usr/pkg/include;/opt/csw/include;/opt/include;/usr/openwin/include";
cmakeVars["CMAKE_SYSTEM_INFO_FILE"]="Platform/Linux";
cmakeVars["CMAKE_SYSTEM_LIBRARY_PATH"]="/usr/lib/w32api;/usr/X11R6/lib;/usr/lib/X11;/usr/pkg/lib;/opt/csw/lib;/opt/lib;/usr/openwin/lib";
cmakeVars["CMAKE_SYSTEM_LOADED"]="1";
cmakeVars["CMAKE_SYSTEM_NAME"]="Linux";
cmakeVars["CMAKE_SYSTEM_PREFIX_PATH"]="/usr/local;/usr;/;/usr;/usr/local";
cmakeVars["CMAKE_SYSTEM_PROCESSOR"]="x86_64";
cmakeVars["CMAKE_SYSTEM_PROGRAM_PATH"]="/usr/pkg/bin";
cmakeVars["CMAKE_SYSTEM_SPECIFIC_INFORMATION_LOADED"]="1";
cmakeVars["CMAKE_SYSTEM_VERSION"]="3.19.0-51-generic";
cmakeVars["CMAKE_TESTING_ENABLED"]="1";
cmakeVars["CMAKE_THREAD_LIBS_INIT"]="-lpthread";
cmakeVars["CMAKE_TWEAK_VERSION"]="2";
cmakeVars["CMAKE_UNAME"]="/bin/uname";
cmakeVars["CMAKE_USE_PTHREADS_INIT"]="1";
cmakeVars["CMAKE_VERBOSE_MAKEFILE"]="FALSE";
cmakeVars["CMAKE_VERSION"]="2.8.12.2";
cmakeVars["COMPONENT"]="";
cmakeVars["CONFIG_FILES"]="/usr/share/cmake/ArmarXCore/ArmarXCoreLibraryDepends-debug.cmake";
cmakeVars["CPPCHECK_FOUND"]="TRUE";
cmakeVars["CXX_TEST_WAS_RUN"]="1";
cmakeVars["C_TEST_WAS_RUN"]="1";
cmakeVars["CppCheck_ARGS"]="--enable=all;--inconclusive;--xml;--xml-version=2;/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/source;2>;/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/cppcheck.xml";
cmakeVars["CppCheck_EXECUTABLE"]="/usr/bin/cppcheck";
cmakeVars["CppCheck_FOUND"]="TRUE";
cmakeVars["CppCheck_OUTPUT_FILE"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/cppcheck.xml";
cmakeVars["DOXYGEN_DOCUMENTATION_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/doxygen";
cmakeVars["DOXYGEN_DOCUMENTATION_HTML_OUTPUT_DIR_REL"]="html";
cmakeVars["DOXYGEN_DOCUMENTATION_IMAGE_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/etc/doxygen/images";
cmakeVars["DOXYGEN_DOCUMENTATION_INPUT_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/source /home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/etc/doxygen/pages /home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/doxygen";
cmakeVars["DOXYGEN_DOCUMENTATION_LAYOUT_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/doxygen/layout";
cmakeVars["DOXYGEN_DOCUMENTATION_PAGES_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/etc/doxygen/pages";
cmakeVars["DOXYGEN_DOCUMENTATION_SNIPPET_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/etc/doxygen/snippets /home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/source";
cmakeVars["FILE"]="";
cmakeVars["FIND_PACKAGE_MESSAGE_DETAILS_Ice"]="[/usr/lib/x86_64-linux-gnu/libFreeze.so;/usr/lib/x86_64-linux-gnu/libGlacier2.so;/usr/lib/x86_64-linux-gnu/libIceBox.so;/usr/lib/x86_64-linux-gnu/libIceGrid.so;/usr/lib/x86_64-linux-gnu/libIcePatch2.so;/usr/lib/x86_64-linux-gnu/libIceSSL.so;/usr/lib/x86_64-linux-gnu/libIceStorm.so;/usr/lib/x86_64-linux-gnu/libIceStormService.so;/usr/lib/x86_64-linux-gnu/libIceUtil.so;/usr/lib/x86_64-linux-gnu/libIceXML.so;/usr/lib/x86_64-linux-gnu/libSlice.so;pthread][Ice_Freeze_LIBRARY_DEBUG-NOTFOUND;Ice_Glacier2_LIBRARY_DEBUG-NOTFOUND;Ice_IceBox_LIBRARY_DEBUG-NOTFOUND;Ice_IceGrid_LIBRARY_DEBUG-NOTFOUND;Ice_IcePatch2_LIBRARY_DEBUG-NOTFOUND;Ice_IceSSL_LIBRARY_DEBUG-NOTFOUND;Ice_IceStorm_LIBRARY_DEBUG-NOTFOUND;Ice_IceStormService_LIBRARY_DEBUG-NOTFOUND;Ice_IceUtil_LIBRARY_DEBUG-NOTFOUND;Ice_IceXML_LIBRARY_DEBUG-NOTFOUND;Ice_Slice_LIBRARY_DEBUG-NOTFOUND;pthread][/usr/include][/usr/share/Ice-3.5.1/slice][/usr/bin/slice2cpp][v3.5.1(3.4.2)]";
cmakeVars["FIND_PACKAGE_MESSAGE_DETAILS_Lcov"]="[/usr/bin/lcov][/usr/bin/genhtml][v()]";
cmakeVars["FIND_PACKAGE_MESSAGE_DETAILS_Threads"]="[TRUE][v()]";
cmakeVars["HOME"]="/home/felipebelo";
cmakeVars["ICE_FOUND"]="TRUE";
cmakeVars["INCLUDE_DIR"]="";
cmakeVars["Ice_BIN_DIRS"]="/bin;/bin;/bin;/bin;/usr/local/bin;/usr/bin";
cmakeVars["Ice_CHECK_BINARIES"]="slice2cpp;slice2html;slice2java";
cmakeVars["Ice_CHECK_LIBRARIES"]="Freeze;Glacier2;IceBox;IceGrid;IcePatch2;IceSSL;IceStorm;IceStormService;IceUtil;IceXML;Slice";
cmakeVars["Ice_Current_Binary"]="";
cmakeVars["Ice_DIR"]="/usr";
cmakeVars["Ice_FOUND"]="TRUE";
cmakeVars["Ice_Freeze_FOUND"]="TRUE";
cmakeVars["Ice_Freeze_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libFreeze.so";
cmakeVars["Ice_Freeze_LIBRARY_DEBUG"]="Ice_Freeze_LIBRARY_DEBUG-NOTFOUND";
cmakeVars["Ice_Freeze_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libFreeze.so";
cmakeVars["Ice_Glacier2_FOUND"]="TRUE";
cmakeVars["Ice_Glacier2_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libGlacier2.so";
cmakeVars["Ice_Glacier2_LIBRARY_DEBUG"]="Ice_Glacier2_LIBRARY_DEBUG-NOTFOUND";
cmakeVars["Ice_Glacier2_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libGlacier2.so";
cmakeVars["Ice_INCLUDE_DIR"]="/usr/include";
cmakeVars["Ice_INCLUDE_DIRECTORIES"]="/usr/local/include;/usr/include";
cmakeVars["Ice_INCLUDE_DIRS"]="/usr/include";
cmakeVars["Ice_IceBox_FOUND"]="TRUE";
cmakeVars["Ice_IceBox_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libIceBox.so";
cmakeVars["Ice_IceBox_LIBRARY_DEBUG"]="Ice_IceBox_LIBRARY_DEBUG-NOTFOUND";
cmakeVars["Ice_IceBox_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libIceBox.so";
cmakeVars["Ice_IceGrid_FOUND"]="TRUE";
cmakeVars["Ice_IceGrid_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libIceGrid.so";
cmakeVars["Ice_IceGrid_LIBRARY_DEBUG"]="Ice_IceGrid_LIBRARY_DEBUG-NOTFOUND";
cmakeVars["Ice_IceGrid_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libIceGrid.so";
cmakeVars["Ice_IcePatch2_FOUND"]="TRUE";
cmakeVars["Ice_IcePatch2_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libIcePatch2.so";
cmakeVars["Ice_IcePatch2_LIBRARY_DEBUG"]="Ice_IcePatch2_LIBRARY_DEBUG-NOTFOUND";
cmakeVars["Ice_IcePatch2_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libIcePatch2.so";
cmakeVars["Ice_IceSSL_FOUND"]="TRUE";
cmakeVars["Ice_IceSSL_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libIceSSL.so";
cmakeVars["Ice_IceSSL_LIBRARY_DEBUG"]="Ice_IceSSL_LIBRARY_DEBUG-NOTFOUND";
cmakeVars["Ice_IceSSL_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libIceSSL.so";
cmakeVars["Ice_IceStormService_FOUND"]="TRUE";
cmakeVars["Ice_IceStormService_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libIceStormService.so";
cmakeVars["Ice_IceStormService_LIBRARY_DEBUG"]="Ice_IceStormService_LIBRARY_DEBUG-NOTFOUND";
cmakeVars["Ice_IceStormService_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libIceStormService.so";
cmakeVars["Ice_IceStorm_FOUND"]="TRUE";
cmakeVars["Ice_IceStorm_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libIceStorm.so";
cmakeVars["Ice_IceStorm_LIBRARY_DEBUG"]="Ice_IceStorm_LIBRARY_DEBUG-NOTFOUND";
cmakeVars["Ice_IceStorm_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libIceStorm.so";
cmakeVars["Ice_IceUtil_FOUND"]="TRUE";
cmakeVars["Ice_IceUtil_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libIceUtil.so";
cmakeVars["Ice_IceUtil_LIBRARY_DEBUG"]="Ice_IceUtil_LIBRARY_DEBUG-NOTFOUND";
cmakeVars["Ice_IceUtil_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libIceUtil.so";
cmakeVars["Ice_IceXML_FOUND"]="TRUE";
cmakeVars["Ice_IceXML_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libIceXML.so";
cmakeVars["Ice_IceXML_LIBRARY_DEBUG"]="Ice_IceXML_LIBRARY_DEBUG-NOTFOUND";
cmakeVars["Ice_IceXML_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libIceXML.so";
cmakeVars["Ice_Ice_FOUND"]="TRUE";
cmakeVars["Ice_Ice_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libIce.so";
cmakeVars["Ice_Ice_LIBRARY_DEBUG"]="Ice_Ice_LIBRARY_DEBUG-NOTFOUND";
cmakeVars["Ice_Ice_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libIce.so";
cmakeVars["Ice_Java_DIR"]="/usr/share/java";
cmakeVars["Ice_Java_FOUND"]="TRUE";
cmakeVars["Ice_LIBRARIES"]="/usr/lib/x86_64-linux-gnu/libFreeze.so;/usr/lib/x86_64-linux-gnu/libGlacier2.so;/usr/lib/x86_64-linux-gnu/libIceBox.so;/usr/lib/x86_64-linux-gnu/libIceGrid.so;/usr/lib/x86_64-linux-gnu/libIcePatch2.so;/usr/lib/x86_64-linux-gnu/libIceSSL.so;/usr/lib/x86_64-linux-gnu/libIceStorm.so;/usr/lib/x86_64-linux-gnu/libIceStormService.so;/usr/lib/x86_64-linux-gnu/libIceUtil.so;/usr/lib/x86_64-linux-gnu/libIceXML.so;/usr/lib/x86_64-linux-gnu/libSlice.so;pthread";
cmakeVars["Ice_LIBRARIES_DEBUG"]="Ice_Freeze_LIBRARY_DEBUG-NOTFOUND;Ice_Glacier2_LIBRARY_DEBUG-NOTFOUND;Ice_IceBox_LIBRARY_DEBUG-NOTFOUND;Ice_IceGrid_LIBRARY_DEBUG-NOTFOUND;Ice_IcePatch2_LIBRARY_DEBUG-NOTFOUND;Ice_IceSSL_LIBRARY_DEBUG-NOTFOUND;Ice_IceStorm_LIBRARY_DEBUG-NOTFOUND;Ice_IceStormService_LIBRARY_DEBUG-NOTFOUND;Ice_IceUtil_LIBRARY_DEBUG-NOTFOUND;Ice_IceXML_LIBRARY_DEBUG-NOTFOUND;Ice_Slice_LIBRARY_DEBUG-NOTFOUND;pthread";
cmakeVars["Ice_LIBRARY_DIRS"]="/lib;/lib;/lib;/lib;/usr/local/lib;/usr/lib/x86_64-linux-gnu;/usr/lib";
cmakeVars["Ice_Lib_Name"]="";
cmakeVars["Ice_Slice_DIR"]="/usr/share/Ice-3.5.1/slice";
cmakeVars["Ice_Slice_DIRS"]="/usr/share/Ice-3.5.1//slice";
cmakeVars["Ice_Slice_FOUND"]="TRUE";
cmakeVars["Ice_Slice_LIBRARY"]="/usr/lib/x86_64-linux-gnu/libSlice.so";
cmakeVars["Ice_Slice_LIBRARY_DEBUG"]="Ice_Slice_LIBRARY_DEBUG-NOTFOUND";
cmakeVars["Ice_Slice_LIBRARY_RELEASE"]="/usr/lib/x86_64-linux-gnu/libSlice.so";
cmakeVars["Ice_VERSION"]="3.5.1";
cmakeVars["Ice_WORKS"]="1";
cmakeVars["Ice__FOUND"]="";
cmakeVars["Ice__LIBRARY"]="";
cmakeVars["Ice__LIBRARY_DEBUG"]="";
cmakeVars["Ice__LIBRARY_RELEASE"]="";
cmakeVars["Ice_slice2cpp"]="/usr/bin/slice2cpp";
cmakeVars["Ice_slice2cpp_FOUND"]="TRUE";
cmakeVars["Ice_slice2html"]="/usr/bin/slice2html";
cmakeVars["Ice_slice2html_FOUND"]="TRUE";
cmakeVars["Ice_slice2java"]="/usr/bin/slice2java";
cmakeVars["Ice_slice2java_FOUND"]="TRUE";
cmakeVars["LCOV_FOUND"]="TRUE";
cmakeVars["Lcov_EXECUTABLE"]="/usr/bin/lcov";
cmakeVars["Lcov_FOUND"]="TRUE";
cmakeVars["Lcov_GenHtml_EXECUTABLE"]="/usr/bin/genhtml";
cmakeVars["MACRO_CHECK_FUNCTION_DEFINITIONS"]="-DIce_WORKS ";
cmakeVars["MACRO_CHECK_LIBRARY_EXISTS_DEFINITION"]="-DCHECK_FUNCTION_EXISTS=pthread_create ";
cmakeVars["OUTPUT"]="Change Dir: /home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/CMakeFiles/CMakeTmp\n\nRun Build Command:/usr/bin/make \"cmTryCompileExec917562532/fast\"\n/usr/bin/make -f CMakeFiles/cmTryCompileExec917562532.dir/build.make CMakeFiles/cmTryCompileExec917562532.dir/build\nmake[1]: Entering directory `/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/CMakeFiles/CMakeTmp'\n/usr/bin/cmake -E cmake_progress_report /home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/CMakeFiles/CMakeTmp/CMakeFiles 1\nBuilding C object CMakeFiles/cmTryCompileExec917562532.dir/CheckFunctionExists.c.o\n/usr/bin/cc   -DCHECK_FUNCTION_EXISTS=pthread_create   -o CMakeFiles/cmTryCompileExec917562532.dir/CheckFunctionExists.c.o   -c /usr/share/cmake-2.8/Modules/CheckFunctionExists.c\nLinking C executable cmTryCompileExec917562532\n/usr/bin/cmake -E cmake_link_script CMakeFiles/cmTryCompileExec917562532.dir/link.txt --verbose=1\n/usr/bin/cc   -DCHECK_FUNCTION_EXISTS=pthread_create    CMakeFiles/cmTryCompileExec917562532.dir/CheckFunctionExists.c.o  -o cmTryCompileExec917562532 -rdynamic -lpthread -lIce -lIceUtil \nmake[1]: Leaving directory `/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/CMakeFiles/CMakeTmp'\n";
cmakeVars["PACKAGE_CONFIG_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config";
cmakeVars["PACKAGE_ICEGRID_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/icegrid";
cmakeVars["POSTSYNC_BIN_DIR"]="${ARMARX_SYNC_DIR}/bin";
cmakeVars["POSTSYNC_LIB_DIR"]="${ARMARX_SYNC_DIR}/lib";
cmakeVars["POSTSYNC_SHARE_DIR"]="${ARMARX_SYNC_DIR}/share";
cmakeVars["PRESET_CMAKE_SYSTEM_NAME"]="FALSE";
cmakeVars["PROJECT_BINARY_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build";
cmakeVars["PROJECT_DATA_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/data";
cmakeVars["PROJECT_ETC_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/etc";
cmakeVars["PROJECT_NAME"]="SecondHandsY1PickAndPlace";
cmakeVars["PROJECT_SCENARIOS_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios";
cmakeVars["PROJECT_SOURCECODE_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/source";
cmakeVars["PROJECT_SOURCE_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace";
cmakeVars["PROJECT_TEMPLATES_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/etc/templates";
cmakeVars["PTHREAD_IF_NECESSARY"]="pthread";
cmakeVars["Project_BINARY_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build";
cmakeVars["Project_SOURCE_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace";
cmakeVars["RUN_CONFIGURE"]="ON";
cmakeVars["SecondHandsY1PickAndPlace_BINARY_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/bin";
cmakeVars["SecondHandsY1PickAndPlace_CMAKE_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/etc/cmake/";
cmakeVars["SecondHandsY1PickAndPlace_CONFIG_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config";
cmakeVars["SecondHandsY1PickAndPlace_ICEGRID_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/icegrid";
cmakeVars["SecondHandsY1PickAndPlace_SOURCE_DIR"]="/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace";
cmakeVars["THREADS_FOUND"]="TRUE";
cmakeVars["Threads_FOUND"]="TRUE";
cmakeVars["UNIX"]="1";
cmakeVars["UPPERCOMPONENT"]="UNIT_TEST_FRAMEWORK";
cmakeVars["_BOOST_INCLUDEDIR_CHANGED"]="0";
cmakeVars["_BOOST_LIBRARYDIR_CHANGED"]="0";
cmakeVars["_BOOST_ROOT_CHANGED"]="0";
cmakeVars["_Boost_ADDITIONAL_VERSIONS_CHANGED"]="0";
cmakeVars["_Boost_CHANGE_INCDIR"]="0";
cmakeVars["_Boost_CHANGE_LIBDIR"]="0";
cmakeVars["_Boost_CHANGE_LIBNAME"]="0";
cmakeVars["_Boost_COMPILER_CHANGED"]="0";
cmakeVars["_Boost_COMPONENTS_SEARCHED"]="unit_test_framework";
cmakeVars["_Boost_FIND_VERSION_SHORT"]="1.48";
cmakeVars["_Boost_INCLUDE_DIR_CHANGED"]="0";
cmakeVars["_Boost_INCLUDE_DIR_LAST"]="/usr/include";
cmakeVars["_Boost_KNOWN_VERSIONS"]="1.56.0;1.56;1.55.0;1.55;1.54.0;1.54;1.53.0;1.53;1.52.0;1.52;1.51.0;1.51;1.50.0;1.50;1.49.0;1.49;1.48.0;1.48;1.47.0;1.47;1.46.1;1.46.0;1.46;1.45.0;1.45;1.44.0;1.44;1.43.0;1.43;1.42.0;1.42;1.41.0;1.41;1.40.0;1.40;1.39.0;1.39;1.38.0;1.38;1.37.0;1.37;1.36.1;1.36.0;1.36;1.35.1;1.35.0;1.35;1.34.1;1.34.0;1.34;1.33.1;1.33.0;1.33";
cmakeVars["_Boost_LIBRARY_DIR_CHANGED"]="0";
cmakeVars["_Boost_LIBRARY_DIR_LAST"]="/usr/lib/x86_64-linux-gnu";
cmakeVars["_Boost_LIB_VERSION_REGEX"]="\"([0-9_]+)\"";
cmakeVars["_Boost_MISSING_COMPONENTS"]="";
cmakeVars["_Boost_NO_SYSTEM_PATHS_CHANGED"]="0";
cmakeVars["_Boost_THREADAPI_CHANGED"]="0";
cmakeVars["_Boost_USE_DEBUG_PYTHON_CHANGED"]="0";
cmakeVars["_Boost_USE_MULTITHREADED_CHANGED"]="0";
cmakeVars["_Boost_USE_MULTITHREADED_LAST"]="TRUE";
cmakeVars["_Boost_USE_STATIC_LIBS_CHANGED"]="0";
cmakeVars["_Boost_USE_STATIC_RUNTIME_CHANGED"]="0";
cmakeVars["_Boost_USE_STLPORT_CHANGED"]="0";
cmakeVars["_Boost_USE_STLPORT_DEPRECATED_NATIVE_IOSTREAMS_CHANGED"]="0";
cmakeVars["_Boost_VARS_DIR"]="BOOST_ROOT;Boost_NO_SYSTEM_PATHS";
cmakeVars["_Boost_VARS_INC"]="BOOST_INCLUDEDIR;Boost_INCLUDE_DIR;Boost_ADDITIONAL_VERSIONS";
cmakeVars["_Boost_VARS_LIB"]="BOOST_LIBRARYDIR;Boost_LIBRARY_DIR";
cmakeVars["_Boost_VARS_NAME"]="Boost_COMPILER;Boost_THREADAPI;Boost_USE_DEBUG_PYTHON;Boost_USE_MULTITHREADED;Boost_USE_STATIC_LIBS;Boost_USE_STATIC_RUNTIME;Boost_USE_STLPORT;Boost_USE_STLPORT_DEPRECATED_NATIVE_IOSTREAMS";
cmakeVars["_Boost_VERSION"]="1.54.0";
cmakeVars["_Boost_VERSION_REGEX"]="([0-9]+)";
cmakeVars["_CMAKE_INSTALL_DIR"]="/usr";
cmakeVars["_CMAKE_TOOLCHAIN_LOCATION"]="/usr/bin";
cmakeVars["_DIR"]="/usr/share/cmake/ArmarXCore";
cmakeVars["_ENV_BOOSTROOT"]="";
cmakeVars["_ENV_BOOST_INCLUDEDIR"]="";
cmakeVars["_ENV_BOOST_LIBRARYDIR"]="";
cmakeVars["_ENV_BOOST_ROOT"]="";
cmakeVars["_INCLUDE"]="pthread.h";
cmakeVars["_INCLUDED_FILE"]="/usr/share/cmake-2.8/Modules/Platform/Linux-GNU-CXX.cmake";
cmakeVars["_INCLUDED_MULTIARCH_TOOLCHAIN_FILE"]="/usr/share/cmake-2.8/Modules/MultiArchCross.cmake";
cmakeVars["_INCLUDED_SYSTEM_INFO_FILE"]="/usr/share/cmake-2.8/Modules/Platform/Linux.cmake";
cmakeVars["_IN_TC"]="0";
cmakeVars["__CMAKE_PARSE_ARGUMENTS_INCLUDED"]="TRUE";
cmakeVars["__COMPILER_GNU"]="1";
cmakeVars["__LINUX_COMPILER_GNU"]="1";
cmakeVars["__UNIX_PATHS_INCLUDED"]="1";
cmakeVars["_boost_BOOSTIFIED_VERSION"]="1_48";
cmakeVars["_boost_CHECKED_COMPONENT"]="TRUE";
cmakeVars["_boost_COMPILER"]="-gcc48";
cmakeVars["_boost_DEBUG_ABI_TAG"]="-d";
cmakeVars["_boost_DEBUG_NAMES"]="boost_unit_test_framework-gcc48-mt-d-1_54;boost_unit_test_framework-gcc48-mt-d;boost_unit_test_framework-mt-d-1_54;boost_unit_test_framework-mt-d;boost_unit_test_framework-mt;boost_unit_test_framework";
cmakeVars["_boost_INCLUDE_SEARCH_DIRS"]="PATHS;C:/boost/include;C:/boost;/sw/local/include";
cmakeVars["_boost_LIBRARY_SEARCH_DIRS"]="/usr/lib/x86_64-linux-gnu;NO_DEFAULT_PATH";
cmakeVars["_boost_LIBRARY_SEARCH_DIRS_tmp"]="/usr/lib/x86_64-linux-gnu;NO_DEFAULT_PATH";
cmakeVars["_boost_MULTITHREADED"]="-mt";
cmakeVars["_boost_PATH_SUFFIXES"]="boost-1_56_0;boost_1_56_0;boost/boost-1_56_0;boost/boost_1_56_0;boost-1_56;boost_1_56;boost/boost-1_56;boost/boost_1_56;boost-1_55_0;boost_1_55_0;boost/boost-1_55_0;boost/boost_1_55_0;boost-1_55;boost_1_55;boost/boost-1_55;boost/boost_1_55;boost-1_54_0;boost_1_54_0;boost/boost-1_54_0;boost/boost_1_54_0;boost-1_54;boost_1_54;boost/boost-1_54;boost/boost_1_54;boost-1_53_0;boost_1_53_0;boost/boost-1_53_0;boost/boost_1_53_0;boost-1_53;boost_1_53;boost/boost-1_53;boost/boost_1_53;boost-1_52_0;boost_1_52_0;boost/boost-1_52_0;boost/boost_1_52_0;boost-1_52;boost_1_52;boost/boost-1_52;boost/boost_1_52;boost-1_51_0;boost_1_51_0;boost/boost-1_51_0;boost/boost_1_51_0;boost-1_51;boost_1_51;boost/boost-1_51;boost/boost_1_51;boost-1_50_0;boost_1_50_0;boost/boost-1_50_0;boost/boost_1_50_0;boost-1_50;boost_1_50;boost/boost-1_50;boost/boost_1_50;boost-1_49_0;boost_1_49_0;boost/boost-1_49_0;boost/boost_1_49_0;boost-1_49;boost_1_49;boost/boost-1_49;boost/boost_1_49;boost-1_48_0;boost_1_48_0;boost/boost-1_48_0;boost/boost_1_48_0;boost-1_48;boost_1_48;boost/boost-1_48;boost/boost_1_48";
cmakeVars["_boost_RELEASE_ABI_TAG"]="";
cmakeVars["_boost_RELEASE_NAMES"]="boost_unit_test_framework-gcc48-mt-1_54;boost_unit_test_framework-gcc48-mt;boost_unit_test_framework-mt-1_54;boost_unit_test_framework-mt;boost_unit_test_framework";
cmakeVars["_boost_STATIC_RUNTIME_WORKAROUND"]="false";
cmakeVars["_boost_TEST_VERSIONS"]="1.56.0;1.56;1.55.0;1.55;1.54.0;1.54;1.53.0;1.53;1.52.0;1.52;1.51.0;1.51;1.50.0;1.50;1.49.0;1.49;1.48.0;1.48";
cmakeVars["_boost_VER"]="";
cmakeVars["_boost_docstring_debug"]="Boost unit_test_framework library (debug)";
cmakeVars["_boost_docstring_release"]="Boost unit_test_framework library (release)";
cmakeVars["_description"]="include file pthread.h";
cmakeVars["_dir"]="/usr/lib/x86_64-linux-gnu";
cmakeVars["_ep_documentation_line_count"]="160";
cmakeVars["_ep_func"]="ExternalProject_Add_StepTargets";
cmakeVars["_ep_hash_algos"]="MD5|SHA1|SHA224|SHA256|SHA384|SHA512";
cmakeVars["_ep_hash_regex"]="^(MD5|SHA1|SHA224|SHA256|SHA384|SHA512)=([0-9A-Fa-f]+)$";
cmakeVars["_ep_key"]="LOG";
cmakeVars["_ep_keywords_ExternalProject_Add"]="^(DEPENDS|PREFIX|LIST_SEPARATOR|TMP_DIR|STAMP_DIR|DOWNLOAD_NAME|DOWNLOAD_DIR|DOWNLOAD_COMMAND|CVS_REPOSITORY|CVS_MODULE|CVS_TAG|SVN_REPOSITORY|SVN_REVISION|SVN_USERNAME|SVN_PASSWORD|SVN_TRUST_CERT|GIT_REPOSITORY|GIT_TAG|HG_REPOSITORY|HG_TAG|URL|URL_HASH|URL_MD5|TLS_VERIFY|TLS_CAINFO|TIMEOUT|UPDATE_COMMAND|PATCH_COMMAND|SOURCE_DIR|CONFIGURE_COMMAND|CMAKE_COMMAND|CMAKE_GENERATOR|CMAKE_GENERATOR_TOOLSET|CMAKE_ARGS|CMAKE_CACHE_ARGS|BINARY_DIR|BUILD_COMMAND|BUILD_IN_SOURCE|INSTALL_DIR|INSTALL_COMMAND|TEST_BEFORE_INSTALL|TEST_AFTER_INSTALL|TEST_COMMAND|LOG_DOWNLOAD|LOG_UPDATE|LOG_CONFIGURE|LOG_BUILD|LOG_TEST|LOG_INSTALL|STEP_TARGETS)$";
cmakeVars["_ep_keywords_ExternalProject_Add_Step"]="^(COMMAND|COMMENT|DEPENDEES|DEPENDERS|DEPENDS|ALWAYS|WORKING_DIRECTORY|LOG)$";
cmakeVars["_ep_keywords_ExternalProject_Add_StepTargets"]="^()$";
cmakeVars["_ep_keywords_ExternalProject_Get_Property"]="^()$";
cmakeVars["_expectedTarget"]="";
cmakeVars["_regex"]="";
cmakeVars["_type"]="PATH";
cmakeVars["arg"]="";
cmakeVars["f"]="";
cmakeVars["file"]="";
cmakeVars["l"]="";
cmakeVars["line"]="";
cmakeVars["lines"]="#  ExternalProject_Add(<name>    # Name for custom target;#    [DEPENDS projects...]       # Targets on which the project depends;#    [PREFIX dir]                # Root dir for entire project;#    [LIST_SEPARATOR sep]        # Sep to be replaced by \\; in cmd lines;#    [TMP_DIR dir]               # Directory to store temporary files;#    [STAMP_DIR dir]             # Directory to store step timestamps;#    [DOWNLOAD_NAME fname]       # File name to store (if not end of URL);#    [DOWNLOAD_DIR dir]          # Directory to store downloaded files;#    [DOWNLOAD_COMMAND cmd...]   # Command to download source tree;#    [CVS_REPOSITORY cvsroot]    # CVSROOT of CVS repository;#    [CVS_MODULE mod]            # Module to checkout from CVS repo;#    [CVS_TAG tag]               # Tag to checkout from CVS repo;#    [SVN_REPOSITORY url]        # URL of Subversion repo;#    [SVN_REVISION rev]          # Revision to checkout from Subversion repo;#    [SVN_USERNAME john ]        # Username for Subversion checkout and update;#    [SVN_PASSWORD doe ]         # Password for Subversion checkout and update;#    [SVN_TRUST_CERT 1 ]         # Trust the Subversion server site certificate;#    [GIT_REPOSITORY url]        # URL of git repo;#    [GIT_TAG tag]               # Git branch name, commit id or tag;#    [HG_REPOSITORY url]         # URL of mercurial repo;#    [HG_TAG tag]                # Mercurial branch name, commit id or tag;#    [URL /.../src.tgz]          # Full path or URL of source;#    [URL_HASH ALGO=value]       # Hash of file at URL;#    [URL_MD5 md5]               # Equivalent to URL_HASH MD5=md5;#    [TLS_VERIFY bool]           # Should certificate for https be checked;#    [TLS_CAINFO file]           # Path to a certificate authority file;#    [TIMEOUT seconds]           # Time allowed for file download operations;#    [UPDATE_COMMAND cmd...]     # Source work-tree update command;#    [PATCH_COMMAND cmd...]      # Command to patch downloaded source;#    [SOURCE_DIR dir]            # Source dir to be used for build;#    [CONFIGURE_COMMAND cmd...]  # Build tree configuration command;#    [CMAKE_COMMAND /.../cmake]  # Specify alternative cmake executable;#    [CMAKE_GENERATOR gen]       # Specify generator for native build;#    [CMAKE_GENERATOR_TOOLSET t] # Generator-specific toolset name;#    [CMAKE_ARGS args...]        # Arguments to CMake command line;#    [CMAKE_CACHE_ARGS args...]  # Initial cache arguments, of the form -Dvar:string=on;#    [BINARY_DIR dir]            # Specify build dir location;#    [BUILD_COMMAND cmd...]      # Command to drive the native build;#    [BUILD_IN_SOURCE 1]         # Use source dir for build dir;#    [INSTALL_DIR dir]           # Installation prefix;#    [INSTALL_COMMAND cmd...]    # Command to drive install after build;#    [TEST_BEFORE_INSTALL 1]     # Add test step executed before install step;#    [TEST_AFTER_INSTALL 1]      # Add test step executed after install step;#    [TEST_COMMAND cmd...]       # Command to drive test;#    [LOG_DOWNLOAD 1]            # Wrap download in script to log output;#    [LOG_UPDATE 1]              # Wrap update in script to log output;#    [LOG_CONFIGURE 1]           # Wrap configure in script to log output;#    [LOG_BUILD 1]               # Wrap build in script to log output;#    [LOG_TEST 1]                # Wrap test in script to log output;#    [LOG_INSTALL 1]             # Wrap install in script to log output;#    [STEP_TARGETS st1 st2 ...]  # Generate custom targets for these steps;#  ExternalProject_Add_Step(<name> <step> # Names of project and custom step;#    [COMMAND cmd...]        # Command line invoked by this step;#    [COMMENT \"text...\"]     # Text printed when step executes;#    [DEPENDEES steps...]    # Steps on which this step depends;#    [DEPENDERS steps...]    # Steps that depend on this step;#    [DEPENDS files...]      # Files on which this step depends;#    [ALWAYS 1]              # No stamp file, step always runs;#    [WORKING_DIRECTORY dir] # Working directory for command;#    [LOG 1]                 # Wrap step in script to log output;#  ExternalProject_Get_Property(<name> [prop1 [prop2 [...]]]);#  ExternalProject_Add_StepTargets(<name> [step1 [step2 [...]]])";
cmakeVars["target"]="";
cmakeVars["type"]="";
cmakeVars["v"]="";
cmakeVars["val"]="0";
cmakeVars["version"]="";

            return cmakeVars[varName];
        }
    }
}

/**
 * The class OutputConfiguration redirects the output of all
 * testcases into files located in /home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/bin as well as onto the console.
 */
struct OutputConfiguration
{
    /**
     * Setup for writing the output to file and redirect it to stout.
     */
    OutputConfiguration()
    {
        // The path where the tests are put into is taken from CMake
        std::string logFileName("/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/bin/");
        logFileName.append(boost::unit_test::framework::master_test_suite().p_name);
        logFileName.append(".xml");
        logFile.open(logFileName.c_str());

        tee = new testout::ostream_tee_device(std::cout, logFile);
        teeStream = new testout::tee_ostream(*tee);

        boost::unit_test::unit_test_log.set_stream(*teeStream);
    }

    /**
     * Flush the stream and append a tag missing from boost::unit_test framework.
     * Afterwards reset the output to stout.
     */
    ~OutputConfiguration()
    {
        // this line is required to write the final "</TestLog>" tag
        // after the testrun is complete
        boost::unit_test::unit_test_log.test_finish();
        boost::unit_test::unit_test_log.set_stream(std::cout);

        teeStream->flush();

        delete tee;
        delete teeStream;

        logFile.close();
    }
    /**
     * Tee device for redirecting the console output to a file specified in OutputConfiguration::logFile.
     */
    testout::ostream_tee_device* tee;
    /**
     * Tee device for redirecting the output of OutputConfiguration::tee to stdout.
     */
    testout::tee_ostream* teeStream;
    /**
     * Path to the output file into which the test results get written.
     */
    std::ofstream logFile;
};

BOOST_GLOBAL_FIXTURE(OutputConfiguration);

#endif
