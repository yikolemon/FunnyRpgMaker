/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002ce04 */

undefined8 * FUN_14002ce04(undefined8 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 local_80 [32];
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  uint *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_40 = param_1;
  local_38 = param_2;
  while( true ) {
    lVar3 = FUN_14000e108(param_2,0x2c,0);
    if (lVar3 == -1) break;
    FUN_1400191d4(local_80,param_2,0,lVar3,&local_60);
    FUN_1400276ef(&local_60,local_80);
    FUN_14001a45e(local_40,&local_60);
    FUN_1400017de(&local_60);
    FUN_1400017de(local_80);
    FUN_1400191d4(&local_60,local_38,lVar3 + 1,0xffffffffffffffff,local_80);
    puVar2 = local_38;
    if (local_38 != &local_60) {
      FUN_1400065bc(local_38);
      *(undefined8 *)(puVar2 + 4) = local_50;
      *(undefined8 *)(puVar2 + 6) = uStack_48;
      *puVar2 = local_60;
      puVar2[1] = uStack_5c;
      puVar2[2] = uStack_58;
      puVar2[3] = uStack_54;
      local_50 = 0;
      uStack_48 = 0xf;
      local_60 = local_60 & 0xffffff00;
    }
    FUN_1400017de(&local_60);
  }
  FUN_1400276ef(&local_60,param_2);
  FUN_14001a45e(local_40,&local_60);
  FUN_1400017de(&local_60);
  puVar1 = local_40;
  FUN_1400017de(local_38);
  return puVar1;
}

