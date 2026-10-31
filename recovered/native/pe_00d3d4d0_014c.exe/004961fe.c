/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004961fe */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

__acrt_ptd * FUN_004961fe(void)

{
  __acrt_ptd *p_Var1;
  DWORD DVar2;
  int *piVar3;
  int *piVar4;
  int iStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x49620a;
  piVar4 = (int *)auStack_20;
  if (DAT_00521b8c != '\0') {
    local_8 = 0;
    if (DAT_0051ae80 != -1) {
      piVar4 = &iStack_24;
      iStack_24 = DAT_0051ae80;
      p_Var1 = (__acrt_ptd *)FUN_0049694f();
      if (p_Var1 != (__acrt_ptd *)0x0) {
        if (p_Var1 == (__acrt_ptd *)0xffffffff) {
          p_Var1 = (__acrt_ptd *)0x0;
        }
        goto LAB_0049627d;
      }
    }
    piVar4[-1] = 0x49623c;
    p_Var1 = FUN_004964a5();
    goto LAB_0049627d;
  }
  piVar3 = &iStack_24;
  iStack_24 = 0x496246;
  DVar2 = GetLastError();
  local_8 = 1;
  if (DAT_0051ae80 == -1) {
LAB_0049626f:
    piVar3[-1] = 0x496274;
    p_Var1 = FUN_004964a5();
  }
  else {
    piVar3[-1] = DAT_0051ae80;
    piVar3[-2] = 0x49625f;
    p_Var1 = (__acrt_ptd *)FUN_00496937(piVar3[-1]);
    if (p_Var1 == (__acrt_ptd *)0x0) goto LAB_0049626f;
    if (p_Var1 == (__acrt_ptd *)0xffffffff) {
      p_Var1 = (__acrt_ptd *)0x0;
    }
  }
  piVar3[-1] = DVar2;
  piVar4 = piVar3 + -2;
  piVar3[-2] = 0x49627d;
  SetLastError(piVar3[-1]);
LAB_0049627d:
  piVar4[-1] = 0x496284;
  return p_Var1;
}

