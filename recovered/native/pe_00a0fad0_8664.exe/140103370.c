/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140103370 */

ulonglong FUN_140103370(byte *param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 local_48 [3];
  
  puVar8 = local_48;
  if (param_2 != (undefined8 *)0x0) {
    puVar8 = param_2;
  }
  iVar2 = isspace((uint)*param_1);
  pbVar6 = param_1;
  while (iVar2 != 0) {
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    iVar2 = isspace((uint)*pbVar1);
  }
  bVar7 = *pbVar6;
  if ((bVar7 - 0x2b & 0xfd) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    bVar7 = 0x2b;
  }
  uVar4 = FUN_140103460(pbVar6,puVar8,param_3,param_4);
  uVar3 = (uint)uVar4;
  if (pbVar6 == (byte *)*puVar8) {
    *puVar8 = param_1;
LAB_1401033eb:
    if (uVar3 != 0) goto LAB_140103413;
  }
  else if (param_1 == (byte *)*puVar8) goto LAB_1401033eb;
  if (bVar7 != 0x2b) {
    if (bVar7 == 0x2d) {
      if (0x80000000 < uVar3) goto LAB_140103413;
      uVar4 = (ulonglong)-uVar3;
    }
    return uVar4;
  }
  if (uVar3 < 0x80000000) {
    return uVar4;
  }
LAB_140103413:
  puVar5 = (undefined4 *)FUN_140113dd4();
  *puVar5 = 0x22;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  uVar3 = 0x7fffffff;
  if (bVar7 == 0x2d) {
    uVar3 = 0x80000000;
  }
  return (ulonglong)uVar3;
}

