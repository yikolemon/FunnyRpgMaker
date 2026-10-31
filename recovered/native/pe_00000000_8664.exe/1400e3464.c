/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e3464 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400e3464(byte *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5
             ,undefined8 *param_6)

{
  undefined8 uVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_2 < 0xb) && ((*param_1 & 2) == 0)) {
    uVar4 = (ulonglong)param_2;
    puVar2 = (uint *)FUN_1400e2faf(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + 0xec));
    uVar1 = *(undefined8 *)(&DAT_140e82700 + uVar4 * 0x18);
    fVar6 = (float)*(undefined8 *)(&DAT_140e826f0 + uVar4 * 0x18) + (float)(*puVar2 & 0xffff);
    fVar7 = (float)((ulonglong)*(undefined8 *)(&DAT_140e826f0 + uVar4 * 0x18) >> 0x20) +
            (float)(*puVar2 >> 0x10);
    uVar3 = *(undefined8 *)(&DAT_140e826f8 + uVar4 * 0x18);
    *param_4 = *(undefined8 *)(&DAT_140e826f8 + uVar4 * 0x18);
    *param_3 = uVar1;
    *param_5 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x54) >> 0x20) * fVar7,
                        (float)*(undefined8 *)(param_1 + 0x54) * fVar6);
    fVar5 = (float)uVar3;
    fVar8 = fVar7 + (float)((ulonglong)uVar3 >> 0x20);
    param_5[1] = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x54) >> 0x20) * fVar8,
                          (float)*(undefined8 *)(param_1 + 0x54) * (fVar6 + fVar5));
    fVar6 = fVar6 + _DAT_140e8c750;
    *param_6 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x54) >> 0x20) *
                        (fVar7 + _UNK_140e8c754),(float)*(undefined8 *)(param_1 + 0x54) * fVar6);
    param_6[1] = CONCAT44(fVar8 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x54) >> 0x20),
                          (fVar6 + fVar5) * (float)*(undefined8 *)(param_1 + 0x54));
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

