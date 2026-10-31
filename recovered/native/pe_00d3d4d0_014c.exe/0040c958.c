/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040c958 */

undefined4 * __cdecl FUN_0040c958(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint local_78;
  uint *local_74;
  undefined4 local_70;
  undefined1 local_6c [24];
  char local_54 [39];
  byte abStack_2d [17];
  undefined2 local_1c [4];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_78;
  if (param_4 < 0) {
    local_74 = (uint *)(local_6c + 1);
    local_6c[0] = '-';
    local_78 = -param_3;
    param_4 = -(uint)(param_3 != 0) - param_4;
  }
  else {
    local_78 = param_3;
    local_74 = (uint *)local_6c;
  }
  uVar9 = CONCAT44(param_4,local_78);
  puVar7 = &local_14;
  if (param_4 != 0) {
    do {
      puVar1 = puVar7;
      uVar6 = (uint)((ulonglong)uVar9 >> 0x20);
      local_78 = (uint)uVar9;
      uVar3 = local_78;
      uVar9 = __aulldiv(local_78,uVar6,100000000,0);
      local_78 = (uint)uVar9;
      iVar2 = 0;
      uVar3 = local_78 * -100000000 + uVar3;
      do {
        local_70 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar4 = uVar3 / 100;
        *(undefined2 *)((int)puVar1 + iVar2 + -2) =
             *(undefined2 *)(&DAT_004a909c + (uVar3 % 100) * 2);
        iVar2 = iVar2 + -2;
        uVar3 = uVar4;
      } while (iVar2 != -6);
      *(undefined2 *)(puVar1 + -2) = *(undefined2 *)(&DAT_004a909c + uVar4 * 2);
      puVar7 = puVar1 + -2;
    } while (0x5f5e0 < uVar6 >> 8);
    puVar7 = puVar1 + -2;
  }
  puVar1 = local_74;
  pcVar5 = local_54;
  if (local_78 < 10) {
    *(byte *)((int)puVar7 + -1) = (byte)local_78 | 0x30;
    puVar7 = (uint *)((int)puVar7 + -1);
  }
  else {
    uVar3 = local_78;
    puVar7 = (uint *)((int)puVar7 + -1);
    do {
      puVar8 = puVar7;
      uVar6 = uVar3;
      *(undefined2 *)((int)puVar8 + -1) = *(undefined2 *)(&DAT_004a909c + (uVar6 % 100) * 2);
      puVar7 = (uint *)((int)puVar8 + -2);
      uVar3 = uVar6 / 100;
    } while (999 < uVar6);
    if (uVar6 < 100) {
      puVar7 = (uint *)((int)puVar8 + -1);
    }
    else {
      *(byte *)puVar7 = (byte)(uVar6 / 100) | 0x30;
    }
  }
  uVar3 = (int)&local_14 - (int)puVar7;
  if ((int)uVar3 <= (int)pcVar5 - (int)local_74) {
    thunk_FUN_0040c6a9(puVar7,uVar3,local_74);
    pcVar5 = (char *)((int)puVar1 + uVar3);
  }
  FUN_0040c483(param_1,local_6c,pcVar5,param_2);
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_78);
  }
  return param_1;
}

