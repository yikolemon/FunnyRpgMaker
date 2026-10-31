/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142557 */

void __fastcall FUN_10142557(undefined4 param_1,int *param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((*param_3 == '\n') && (*(char *)((int)param_2 + 0x17) != '\0')) {
    return;
  }
  if (((char)param_2[3] != '\0') && (param_2[1] == param_2[2])) {
    iVar2 = *param_2;
    iVar1 = FUN_10151d91();
    if (iVar2 < iVar1) {
      FUN_10152418(iVar2,1,1);
      FUN_10151f58(1);
      iVar2 = FUN_10151f8b(param_3,param_4);
      if (iVar2 == 0) {
        return;
      }
      goto LAB_101425f5;
    }
  }
  FUN_10151d3f();
  iVar2 = FUN_10151f8b(param_3,param_4);
  if (iVar2 == 0) {
    return;
  }
  FUN_10152465(iVar2);
LAB_101425f5:
  *param_2 = *param_2 + iVar2;
  *(undefined1 *)((int)param_2 + 0x16) = 0;
  return;
}

