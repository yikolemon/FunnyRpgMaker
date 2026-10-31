/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10257a10 */

uint FUN_10257a10(byte *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte *pbVar6;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_8 = &local_c;
  if (param_2 != (undefined4 *)0x0) {
    local_8 = param_2;
  }
  iVar2 = _isspace((uint)*param_1);
  pbVar6 = param_1;
  while (iVar2 != 0) {
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    iVar2 = _isspace((uint)*pbVar1);
  }
  bVar5 = *pbVar6;
  if ((bVar5 == 0x2d) || (bVar5 == 0x2b)) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    bVar5 = 0x2b;
  }
  uVar3 = FUN_10257ae0(pbVar6,local_8,param_3,param_4);
  if (pbVar6 == (byte *)*local_8) {
    *local_8 = param_1;
LAB_10257a86:
    if (uVar3 != 0) goto LAB_10257aa9;
  }
  else if (param_1 == (byte *)*local_8) goto LAB_10257a86;
  if (bVar5 != 0x2b) {
    if (bVar5 == 0x2d) {
      if (0x80000000 < uVar3) goto LAB_10257aa9;
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  if (uVar3 < 0x80000000) {
    return uVar3;
  }
LAB_10257aa9:
  puVar4 = (undefined4 *)FUN_10268ffd();
  *puVar4 = 0x22;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  return (bVar5 == 0x2d) + 0x7fffffff;
}

