/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006f548 */

undefined8 FUN_14006f548(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined6 extraout_var;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar5 = (uint *)FUN_14007a1b5((uint *)(lVar2 + 6),param_3);
  if (puVar5 != (uint *)0x0) {
    uVar4 = *puVar5;
    uVar1 = puVar5[1];
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    if ((uVar4 != 0) &&
       (uVar6 = FUN_14007a217((uint *)((ulonglong)uVar4 + lVar2),param_2), (int)uVar6 != 0)) {
      return 1;
    }
    uVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if ((uVar4 != 0) &&
       (uVar3 = FUN_14007a27f((uint *)(lVar2 + (ulonglong)uVar4),param_2),
       (int)CONCAT62(extraout_var,uVar3) != 0)) {
      return 0;
    }
  }
  return 0xffffffff;
}

