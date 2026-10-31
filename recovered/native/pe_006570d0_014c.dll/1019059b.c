/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019059b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1019059b(byte *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((param_2 < 0xb) && ((*param_1 & 2) == 0)) {
    puVar3 = (uint *)FUN_10190112(param_1,*(undefined4 *)(*(int *)(param_1 + 0x290) + 0xd0));
    uVar1 = *(undefined8 *)(&DAT_102f73f4 + param_2 * 0x18);
    uVar2 = *(undefined8 *)(&DAT_102f73fc + param_2 * 0x18);
    fVar5 = (float)*(undefined8 *)(&DAT_102f73ec + param_2 * 0x18) + (float)(*puVar3 & 0xffff);
    fVar6 = (float)((ulonglong)*(undefined8 *)(&DAT_102f73ec + param_2 * 0x18) >> 0x20) +
            (float)(*puVar3 >> 0x10);
    *param_4 = uVar1;
    *param_3 = uVar2;
    *param_5 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x44) >> 0x20) * fVar6,
                        (float)*(undefined8 *)(param_1 + 0x44) * fVar5);
    fVar7 = fVar6 + (float)((ulonglong)uVar1 >> 0x20);
    param_5[1] = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x44) >> 0x20) * fVar7,
                          (float)*(undefined8 *)(param_1 + 0x44) * (fVar5 + (float)uVar1));
    fVar5 = fVar5 + _DAT_103013e0;
    *param_6 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x44) >> 0x20) *
                        (fVar6 + _UNK_103013e4),(float)*(undefined8 *)(param_1 + 0x44) * fVar5);
    param_6[1] = CONCAT44(fVar7 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x44) >> 0x20),
                          (fVar5 + (float)uVar1) * (float)*(undefined8 *)(param_1 + 0x44));
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

