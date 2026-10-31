/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180221e8a */

undefined8 FUN_180221e8a(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar4 = (uint *)FUN_18022cb75(lVar2 + 6,param_4);
  if (puVar4 != (uint *)0x0) {
    uVar6 = *puVar4;
    uVar1 = puVar4[1];
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    if (uVar6 != 0) {
      iVar3 = FUN_18022cbd7((ulonglong)uVar6 + lVar2,param_3);
      if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180221edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*(longlong *)(param_2 + 0x10) + 0x18))(param_2,param_3);
        return uVar5;
      }
    }
    uVar6 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (uVar6 != 0) {
      uVar5 = FUN_18022cc3f(lVar2 + (ulonglong)uVar6,param_3);
      return uVar5;
    }
  }
  return 0;
}

