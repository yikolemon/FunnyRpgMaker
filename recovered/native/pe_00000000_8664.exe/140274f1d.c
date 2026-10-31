/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140274f1d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140274f1d(undefined8 *param_1)

{
  int iVar1;
  FuncInfo *pFVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [4];
  undefined8 local_58 [4];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_98;
  local_14 = 0;
  iVar1 = FUN_140274ffa();
  if (iVar1 - 2U < 3) {
    puVar3 = local_58;
    FUN_140275340(puVar3,*(undefined1 *)*param_1);
    pFVar2 = &FuncInfo_1405b77c0;
  }
  else if (iVar1 == 5) {
    puVar3 = local_78;
    FUN_1402754be(puVar3,local_14);
    pFVar2 = (FuncInfo *)&DAT_1405b7800;
  }
  else {
    if (iVar1 != 1) {
      if (ram0x000140613b10 == (local_10 ^ (ulonglong)auStack_98)) {
        return local_14;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14044aba0(local_10 ^ (ulonglong)auStack_98);
    }
    puVar3 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_14027514e(puVar3);
    pFVar2 = (FuncInfo *)&DAT_1405b7780;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(puVar3,pFVar2);
}

