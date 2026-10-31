/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140103660 */

ulonglong FUN_140103660(byte *param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 local_48 [3];
  
  puVar7 = local_48;
  if (param_2 != (undefined8 *)0x0) {
    puVar7 = param_2;
  }
  iVar2 = isspace((uint)*param_1);
  pbVar5 = param_1;
  while (iVar2 != 0) {
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    iVar2 = isspace((uint)*pbVar1);
  }
  bVar6 = *pbVar5;
  if ((bVar6 - 0x2b & 0xfd) == 0) {
    pbVar5 = pbVar5 + 1;
  }
  else {
    bVar6 = 0x2b;
  }
  uVar3 = FUN_140103760(pbVar5,puVar7,param_3,param_4);
  if (pbVar5 == (byte *)*puVar7) {
    *puVar7 = param_1;
LAB_1401036e0:
    if (uVar3 != 0) goto LAB_140103712;
  }
  else if (param_1 == (byte *)*puVar7) goto LAB_1401036e0;
  if (bVar6 != 0x2b) {
    if (bVar6 == 0x2d) {
      if (0x8000000000000000 < uVar3) goto LAB_140103712;
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  if (uVar3 < 0x8000000000000000) {
    return uVar3;
  }
LAB_140103712:
  puVar4 = (undefined4 *)FUN_140113dd4();
  *puVar4 = 0x22;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  return (ulonglong)(bVar6 == 0x2d) + 0x7fffffffffffffff;
}

