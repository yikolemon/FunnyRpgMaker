/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016fbe6 */

undefined4 __fastcall FUN_1016fbe6(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_1017207d();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_10170e07();
    uVar2 = 0;
  }
  else {
    _memset(puVar1 + 1,0,0x4814);
    *puVar1 = param_1;
    FUN_10174bc5();
    uVar2 = FUN_10174c0f();
    FUN_10170e7b();
    thunk_FUN_10274120(puVar1);
  }
  return uVar2;
}

