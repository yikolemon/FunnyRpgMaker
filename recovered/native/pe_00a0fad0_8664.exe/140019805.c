/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140019805 */

undefined8 *
FUN_140019805(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4,
             longlong *param_5)

{
  uint *puVar1;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 != param_3) {
    puVar1 = param_4;
    do {
      (**(code **)(*param_5 + 0x70))(param_5,&local_68,*param_2);
      if (puVar1 != &local_68) {
        FUN_1400065bc(puVar1);
        *(undefined8 *)(puVar1 + 4) = local_58;
        *(undefined8 *)(puVar1 + 6) = uStack_50;
        *puVar1 = local_68;
        puVar1[1] = uStack_64;
        puVar1[2] = uStack_60;
        puVar1[3] = uStack_5c;
        local_58 = 0;
        uStack_50 = 0xf;
        local_68 = local_68 & 0xffffff00;
      }
      FUN_1400017de(&local_68);
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 8;
      param_4 = param_4 + 8;
    } while (param_2 != param_3);
  }
  *param_1 = param_4;
  return param_1;
}

