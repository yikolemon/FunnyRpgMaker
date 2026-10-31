/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031010a */

void FUN_14031010a(longlong *param_1,undefined8 *param_2,char *param_3,longlong *param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  longlong lVar4;
  
  lVar4 = DAT_14062a630;
  if (*param_3 == '%') {
    if (param_3[1] != '.') {
      if ((param_3[1] == 's') && (param_3[2] == '\0')) {
        pcVar3 = 
        "d to wire InputTextMultiline() to a dynamic string type. See misc/cpp/imgui_stdlib.h for an example. (This is not demonstrated in imgui_demo.cpp because we don\'t want to include <string> in here)"
        ;
        if ((char *)*param_4 != (char *)0x0) {
          pcVar3 = (char *)*param_4;
        }
        *param_1 = (longlong)pcVar3;
        if (param_2 == (undefined8 *)0x0) {
          return;
        }
        sVar2 = strlen(pcVar3);
        pcVar3 = pcVar3 + sVar2;
        goto LAB_14031019f;
      }
      goto LAB_140310175;
    }
    if (((param_3[2] != '*') || (param_3[3] != 's')) || (param_3[4] != '\0')) goto LAB_140310175;
    iVar1 = (int)*param_4;
    pcVar3 = (char *)param_4[1];
    if (pcVar3 == (char *)0x0) {
      iVar1 = FUN_1403101d0(iVar1,6);
      pcVar3 = 
      "d to wire InputTextMultiline() to a dynamic string type. See misc/cpp/imgui_stdlib.h for an example. (This is not demonstrated in imgui_demo.cpp because we don\'t want to include <string> in here)"
      ;
    }
    *param_1 = (longlong)pcVar3;
    lVar4 = (longlong)iVar1;
  }
  else {
LAB_140310175:
    iVar1 = FUN_14031004f(*(undefined8 *)(DAT_14062a630 + 0x2ce0),
                          (longlong)*(int *)(DAT_14062a630 + 0x2cd8));
    lVar4 = *(longlong *)(lVar4 + 0x2ce0);
    *param_1 = lVar4;
    if (param_2 == (undefined8 *)0x0) {
      return;
    }
    pcVar3 = (char *)(longlong)iVar1;
  }
  pcVar3 = pcVar3 + lVar4;
LAB_14031019f:
  *param_2 = pcVar3;
  return;
}

