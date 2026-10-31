/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c7054 */

void FUN_101c7054(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar5;
  int iVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    iVar2 = param_1[0x12];
    if ((iVar2 == 0x6f75746c) || (iVar2 == 0x62697473)) {
      param_2 = (uint)*(ushort *)(*(int *)(param_1[1] + 0x58) + 0xc) * param_2;
      iVar4 = param_2 + 0x3ff;
      if (-1 < param_2) {
        iVar4 = param_2;
      }
      uVar3 = iVar4 >> 10;
      param_3 = (uint)*(ushort *)(*(int *)(param_1[1] + 0x58) + 0xe) * param_3;
      iVar4 = param_3 + 0x3ff;
      if (-1 < param_3) {
        iVar4 = param_3;
      }
      uVar5 = iVar4 >> 10;
      if (iVar2 == 0x6f75746c) {
        FUN_101c3997(param_1 + 0x1b,uVar3,uVar5);
      }
      else {
        iVar2 = FUN_10223909(param_1);
        if (iVar2 != 0) {
          return;
        }
        uVar5 = uVar5 & 0xffffffc0;
        uVar3 = uVar3 & 0xffffffc0;
        if (uVar3 == 0) {
          uVar3 = 0x40;
        }
        iVar2 = FUN_10222f96(uVar1,param_1 + 0x13,uVar3,uVar5);
        if (iVar2 != 0) {
          return;
        }
      }
      if (param_1[0x10] != 0) {
        param_1[0x10] = param_1[0x10] + uVar3;
      }
      if (param_1[0x11] != 0) {
        param_1[0x11] = param_1[0x11] + uVar5;
      }
      param_1[6] = param_1[6] + uVar3;
      param_1[7] = param_1[7] + uVar5;
      param_1[10] = param_1[10] + uVar3;
      param_1[0xd] = param_1[0xd] + uVar5;
      param_1[9] = param_1[9] + uVar5;
      if (param_1[0x12] == 0x62697473) {
        param_1[0x1a] = param_1[0x1a] + ((int)uVar5 >> 6);
      }
    }
  }
  return;
}

