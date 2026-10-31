/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026cc30 */

ulonglong FUN_18026cc30(byte *param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4)

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
  uVar3 = FUN_18026cd30(pbVar5,puVar7,param_3,param_4);
  if (pbVar5 == (byte *)*puVar7) {
    *puVar7 = param_1;
LAB_18026ccb0:
    if (uVar3 != 0) goto LAB_18026cce2;
  }
  else if (param_1 == (byte *)*puVar7) goto LAB_18026ccb0;
  if (bVar6 != 0x2b) {
    if (bVar6 == 0x2d) {
      if (0x8000000000000000 < uVar3) goto LAB_18026cce2;
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  if (uVar3 < 0x8000000000000000) {
    return uVar3;
  }
LAB_18026cce2:
  puVar4 = (undefined4 *)FUN_18027e66c();
  *puVar4 = 0x22;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  return (ulonglong)(bVar6 == 0x2d) + 0x7fffffffffffffff;
}

