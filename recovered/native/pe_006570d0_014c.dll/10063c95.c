/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10063c95 */

undefined4 FUN_10063c95(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 auStack_38 [2];
  undefined8 local_28 [2];
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_38;
  local_c = 0;
  iVar1 = FUN_10063d48(param_1,param_2,&local_c);
  puVar2 = auStack_38;
  if (iVar1 - 2U < 3) {
    puVar2 = local_28;
    FUN_100640b0(*(undefined1 *)*param_1);
    puVar3 = &DAT_10367bec;
  }
  else if (iVar1 == 5) {
    FUN_1006425a(local_c);
    puVar3 = &DAT_10367c2c;
  }
  else {
    if (iVar1 != 1) {
      if (DAT_10388d00 == (local_8 ^ (uint)auStack_38)) {
        return local_c;
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    puVar2 = &local_18;
    local_18 = 0;
    local_10 = 0;
    FUN_10063e74();
    puVar3 = &DAT_10367bac;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(puVar2,puVar3);
}

