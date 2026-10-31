/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00415a0a */

undefined8 __cdecl FUN_00415a0a(byte *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  uint local_3c;
  uint local_38;
  undefined1 local_17 [2];
  undefined1 auStack_15 [3];
  undefined1 auStack_12 [2];
  
  register0x00000004 = DAT_0050e8c0 ^ (uint)&local_3c;
  uVar9 = 6;
  if (-1 < (int)param_4) {
    uVar9 = param_4;
  }
  uVar5 = param_3 & 0x7fffff;
  uVar7 = 0xffffff82;
  if (uVar5 == 0) {
    uVar7 = 0;
  }
  uVar3 = uVar5 * 2 + 0x1000000;
  uVar2 = (param_3 >> 0x17) - 0x7f;
  if (param_3 >> 0x17 == 0) {
    uVar3 = uVar5 * 2;
    uVar2 = uVar7;
  }
  uVar7 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar7 = uVar2;
  }
  uVar8 = 0x84;
  local_3c = uVar2;
  if ((int)param_2 - (int)param_1 < (int)uVar9) goto LAB_00415bf2;
  iVar10 = 3 - (uint)(uVar7 < 100);
  if (uVar7 < 10) {
    iVar10 = 1;
  }
  local_38 = uVar7;
  if ((int)(((int)param_2 - (int)param_1) - uVar9) < (int)((iVar10 - (uint)(uVar9 == 0)) + 4))
  goto LAB_00415bf2;
  if (uVar9 < 6) {
    uVar3 = uVar3 + (1 << ((char)uVar9 * -4 + 0x18U & 0x1f) &
                    (uVar3 * 2 + 0x1ffffff | uVar3) & uVar3 * 2);
    *param_1 = (byte)(uVar3 >> 0x18) | 0x30;
    if (uVar9 != 0) goto LAB_00415b00;
    pbVar12 = param_1 + 1;
  }
  else {
    *param_1 = (byte)(uVar3 >> 0x18) | 0x30;
LAB_00415b00:
    uVar3 = uVar3 & 0xffffff;
    param_1[1] = 0x2e;
    param_1[2] = (&DAT_004a9164)[uVar3 >> 0x14];
    local_3c = uVar9 - 1;
    if (local_3c == 0) {
      pbVar12 = param_1 + 3;
      local_3c = uVar2;
    }
    else {
      iVar6 = 0x14;
      iVar10 = 0;
      do {
        iVar11 = iVar10;
        uVar3 = ~(-1 << ((byte)iVar6 & 0x1f)) & uVar3;
        iVar6 = iVar6 + -4;
        param_1[iVar11 + 3] = (&DAT_004a9164)[uVar3 >> ((byte)iVar6 & 0x1f)];
        if (uVar9 - 2 == iVar11) {
          pbVar12 = param_1 + iVar11 + 4;
          goto LAB_00415b7e;
        }
        iVar10 = iVar11 + 1;
      } while (iVar6 != 0);
      _memset(param_1 + iVar11 + 4,0x30,local_3c - (iVar11 + 1));
      pbVar12 = param_1 + uVar9 + 2;
    }
  }
LAB_00415b7e:
  puVar1 = (uint *)(pbVar12 + 2);
  *pbVar12 = 0x70;
  pbVar12[1] = (char)((int)uVar2 >> 0x1f) * -2 + 0x2b;
  if (local_38 < 10) {
    puVar4 = (uint *)auStack_15;
    uVar9 = local_38;
LAB_00415bcb:
    *(byte *)puVar4 = (byte)uVar9 | 0x30;
  }
  else {
    uVar9 = local_38 / 100;
    unique0x00017100 = *(undefined2 *)(&DAT_004a909c + (local_38 % 100) * 2);
    if (99 < local_38) {
      puVar4 = (uint *)local_17;
      goto LAB_00415bcb;
    }
    puVar4 = (uint *)(local_17 + 1);
  }
  puVar13 = auStack_15 + (1 - (int)puVar4);
  if ((int)param_2 - (int)puVar1 < (int)puVar13) {
    uVar8 = 0x84;
  }
  else {
    thunk_FUN_0040c6a9(puVar4,(uint)puVar13,puVar1);
    param_2 = (undefined1 *)((int)puVar1 + (int)puVar13);
    uVar8 = 0;
  }
LAB_00415bf2:
  if (DAT_0050e8c0 == (stack0xffffffec ^ (uint)&local_3c)) {
    return CONCAT44(uVar8,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(stack0xffffffec ^ (uint)&local_3c);
}

