/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040c3a3 */

undefined4 * __cdecl FUN_0040c3a3(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  uint *local_50;
  undefined1 local_4c [24];
  char local_34 [29];
  byte local_17;
  undefined1 local_16 [2];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_50;
  if ((int)param_3 < 0) {
    puVar4 = (uint *)(local_4c + 1);
    local_4c[0] = '-';
    param_3 = -param_3;
  }
  else {
    puVar4 = (uint *)local_4c;
  }
  puVar2 = &local_14;
  if (param_3 < 10) {
    local_16[1] = (byte)param_3 | 0x30;
    puVar2 = (uint *)(local_16 + 1);
  }
  else {
    do {
      puVar1 = puVar2;
      uVar3 = param_3;
      *(undefined2 *)((int)puVar1 + -2) = *(undefined2 *)(&DAT_004a909c + (uVar3 % 100) * 2);
      puVar2 = (uint *)((int)puVar1 + -2);
      param_3 = uVar3 / 100;
    } while (999 < uVar3);
    local_50 = puVar4;
    if (99 < uVar3) {
      *(byte *)((int)puVar1 + -3) = (byte)(uVar3 / 100) | 0x30;
      puVar2 = (uint *)((int)puVar1 + -3);
    }
  }
  pcVar5 = local_34;
  uVar3 = (int)&local_14 - (int)puVar2;
  if ((int)uVar3 <= (int)pcVar5 - (int)puVar4) {
    thunk_FUN_0040c6a9(puVar2,uVar3,puVar4);
    pcVar5 = (char *)((int)puVar4 + uVar3);
  }
  FUN_0040c483(param_1,local_4c,pcVar5,param_2);
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_50)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_50);
  }
  return param_1;
}

