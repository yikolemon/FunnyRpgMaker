/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140021146 */

uint * FUN_140021146(longlong param_1,uint *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  int local_2c;
  uint *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0xf;
  param_2[7] = 0;
  local_28 = param_2;
  if ((*(longlong *)(param_3 + 0x10) != 0) || (*(int *)(param_1 + 0x1b0) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x1c0);
    local_38 = param_3;
    local_2c = param_4;
    for (lVar3 = *(longlong *)(param_1 + 0x1b8); lVar3 != lVar1; lVar3 = lVar3 + 0xa8) {
      if ((*(int *)(lVar3 + 0xa0) == -1) || (*(int *)(lVar3 + 0xa0) == local_2c)) {
        FUN_14002185a(lVar3,&local_58,local_38);
        puVar2 = local_28;
        if (local_28 != &local_58) {
          FUN_1400065bc(local_28);
          *(undefined8 *)(puVar2 + 4) = local_48;
          *(undefined8 *)(puVar2 + 6) = uStack_40;
          *puVar2 = local_58;
          puVar2[1] = uStack_54;
          puVar2[2] = uStack_50;
          puVar2[3] = uStack_4c;
          local_48 = 0;
          uStack_40 = 0xf;
          local_58 = local_58 & 0xffffff00;
        }
        FUN_1400017de(&local_58);
        if (*(longlong *)(local_28 + 4) != 0) {
          return local_28;
        }
      }
    }
  }
  return local_28;
}

