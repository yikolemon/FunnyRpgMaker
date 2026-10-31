/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049d66d */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 __cdecl FUN_0049d66d(uint param_1)

{
  __acrt_ptd *p_Var1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_14;
  
  if (param_1 < 0x2000) {
    uVar4 = 0;
    ___acrt_lock(7);
    iVar5 = 0;
    iVar3 = DAT_00521ec8;
    while (iVar3 <= (int)param_1) {
      if ((&DAT_00521cc8)[iVar5] == 0) {
        puVar2 = FUN_0049d5bd();
        (&DAT_00521cc8)[iVar5] = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          uVar4 = 0xc;
          break;
        }
        iVar3 = DAT_00521ec8 + 0x40;
        DAT_00521ec8 = iVar3;
      }
      iVar5 = iVar5 + 1;
    }
    FUN_0049d702();
  }
  else {
    p_Var1 = FUN_0048f66d();
    uVar4 = 9;
    *(undefined4 *)p_Var1 = 9;
    FUN_00495c88();
  }
  ExceptionList = local_14;
  return uVar4;
}

