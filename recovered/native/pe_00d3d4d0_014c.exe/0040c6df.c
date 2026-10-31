/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040c6df */

undefined4 * __cdecl FUN_0040c6df(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  char *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  char acStackY_60 [4];
  uint auStack_4c [6];
  char local_34 [29];
  byte local_17;
  undefined1 local_16 [2];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_4c;
  puVar3 = &local_14;
  if (param_3 < 10) {
    local_16[1] = (byte)param_3 | 0x30;
    puVar3 = (uint *)(local_16 + 1);
  }
  else {
    do {
      puVar2 = puVar3;
      uVar4 = param_3;
      *(undefined2 *)((int)puVar2 + -2) = *(undefined2 *)(&DAT_004a909c + (uVar4 % 100) * 2);
      puVar3 = (uint *)((int)puVar2 + -2);
      param_3 = uVar4 / 100;
    } while (999 < uVar4);
    if (99 < uVar4) {
      *(byte *)((int)puVar2 + -3) = (byte)(uVar4 / 100) | 0x30;
      puVar3 = (uint *)((int)puVar2 + -3);
    }
  }
  uVar4 = (int)&local_14 - (int)puVar3;
  if ((int)uVar4 < 0x19) {
    thunk_FUN_0040c6a9(puVar3,uVar4,auStack_4c);
    pcVar1 = (char *)((int)auStack_4c + uVar4);
  }
  else {
    pcVar1 = local_34;
  }
  acStackY_60[0] = 's';
  acStackY_60[1] = -0x39;
  acStackY_60[2] = '@';
  acStackY_60[3] = '\0';
  FUN_0040c483(param_1,(char *)auStack_4c,pcVar1,param_2);
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_4c);
  }
  return param_1;
}

