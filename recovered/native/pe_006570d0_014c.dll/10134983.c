/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134983 */

undefined4 __fastcall FUN_10134983(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 in_EAX;
  undefined3 uVar2;
  
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    uVar2 = (undefined3)((uint)in_EAX >> 8);
    if (*param_1 < cVar1) goto LAB_1013499b;
  }
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    uVar2 = (undefined3)((uint)param_3 >> 8);
    if (cVar1 < *param_1) {
LAB_1013499b:
      *param_1 = cVar1;
      return CONCAT31(uVar2,1);
    }
  }
  return 0;
}

