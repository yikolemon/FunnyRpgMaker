/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040cda4 */

undefined4 * __cdecl FUN_0040cda4(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c [6];
  char local_54 [39];
  byte abStack_2d [17];
  undefined2 local_1c [4];
  uint local_14;
  
  uVar1 = CONCAT44(param_4,param_3);
  uVar9 = CONCAT44(local_74,local_70);
  local_14 = DAT_0050e8c0 ^ (uint)&local_74;
  puVar8 = &local_14;
  if (param_4 != 0) {
    do {
      puVar2 = puVar8;
      uVar7 = (uint)((ulonglong)uVar1 >> 0x20);
      local_74 = (undefined4)((ulonglong)uVar9 >> 0x20);
      local_70 = (undefined4)uVar9;
      uVar9 = __aulldiv((uint)uVar1,uVar7,100000000,0);
      param_3 = (uint)uVar9;
      iVar4 = 0;
      uVar5 = param_3 * -100000000 + (uint)uVar1;
      do {
        uVar6 = uVar5 / 100;
        *(undefined2 *)((int)puVar2 + iVar4 + -2) =
             *(undefined2 *)(&DAT_004a909c + (uVar5 % 100) * 2);
        iVar4 = iVar4 + -2;
        uVar5 = uVar6;
      } while (iVar4 != -6);
      *(undefined2 *)(puVar2 + -2) = *(undefined2 *)(&DAT_004a909c + uVar6 * 2);
      puVar8 = puVar2 + -2;
      uVar1 = uVar9;
    } while (0x5f5e0 < uVar7 >> 8);
    puVar8 = puVar2 + -2;
  }
  local_74 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_70 = (undefined4)uVar9;
  if (param_3 < 10) {
    *(byte *)((int)puVar8 + -1) = (byte)param_3 | 0x30;
    puVar8 = (uint *)((int)puVar8 + -1);
  }
  else {
    puVar8 = (uint *)((int)puVar8 + -1);
    do {
      puVar2 = puVar8;
      uVar5 = param_3;
      *(undefined2 *)((int)puVar2 + -1) = *(undefined2 *)(&DAT_004a909c + (uVar5 % 100) * 2);
      puVar8 = (uint *)((int)puVar2 + -2);
      param_3 = uVar5 / 100;
    } while (999 < uVar5);
    if (uVar5 < 100) {
      puVar8 = (uint *)((int)puVar2 + -1);
    }
    else {
      *(byte *)puVar8 = (byte)(uVar5 / 100) | 0x30;
    }
  }
  uVar5 = (int)&local_14 - (int)puVar8;
  if ((int)uVar5 < 0x19) {
    thunk_FUN_0040c6a9(puVar8,uVar5,local_6c);
    uVar9 = CONCAT44(local_74,local_70);
    pcVar3 = (char *)((int)local_6c + uVar5);
  }
  else {
    pcVar3 = local_54;
  }
  local_74 = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_70 = (undefined4)uVar9;
  FUN_0040c483(param_1,(char *)local_6c,pcVar3,param_2);
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_74)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_74);
  }
  return param_1;
}

