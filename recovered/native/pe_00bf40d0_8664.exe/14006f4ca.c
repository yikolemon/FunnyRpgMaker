/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006f4ca */

ushort FUN_14006f4ca(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar4 = (uint *)FUN_14007a1b5((uint *)(lVar2 + 6),param_4);
  if (puVar4 != (uint *)0x0) {
    uVar6 = *puVar4;
    uVar1 = puVar4[1];
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    if (uVar6 != 0) {
      uVar5 = FUN_14007a217((uint *)((ulonglong)uVar6 + lVar2),param_3);
      if ((int)uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014006f51d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*(longlong *)(param_2 + 0x10) + 0x18))(param_2,param_3);
        return uVar3;
      }
    }
    uVar6 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (uVar6 != 0) {
      uVar3 = FUN_14007a27f((uint *)(lVar2 + (ulonglong)uVar6),param_3);
      return uVar3;
    }
  }
  return 0;
}

