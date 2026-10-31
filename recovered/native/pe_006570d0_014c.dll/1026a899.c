/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a899 */

uint FUN_1026a899(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_1 >> 4 & 1) == 0) {
    cVar2 = FUN_1026a837(param_2);
    uVar3 = 0x8100;
    if (cVar2 != '\0') goto LAB_1026a8bf;
  }
  else {
LAB_1026a8bf:
    uVar3 = 0x4140;
  }
  uVar3 = ~(param_1 << 7) & 0x80 | uVar3;
  if (param_2 != 0) {
    iVar4 = FUN_1027a750(param_2,0x2e);
    if (iVar4 != 0) {
      iVar5 = FUN_1026b1a0(iVar4,L".exe");
      if (iVar5 != 0) {
        iVar5 = FUN_1026b1a0(iVar4,L".cmd");
        if (iVar5 != 0) {
          iVar5 = FUN_1026b1a0(iVar4,L".bat");
          if (iVar5 != 0) {
            iVar4 = FUN_1026b1a0(iVar4,L".com");
            if (iVar4 != 0) goto LAB_1026a8d5;
          }
        }
      }
      bVar1 = true;
      goto LAB_1026a92f;
    }
  }
LAB_1026a8d5:
  bVar1 = false;
LAB_1026a92f:
  uVar6 = uVar3 | 0x40;
  if (!bVar1) {
    uVar6 = uVar3;
  }
  return (uVar6 & 0x1c0) >> 6 | uVar6 >> 3 & 0x38 | uVar6;
}

