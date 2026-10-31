/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b0ee */

void __fastcall
FUN_1020b0ee(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int *param_10)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  _memset(param_1 + 2,0,0x2dfc);
  *param_1 = param_2;
  param_1[1] = param_3;
  piVar1 = param_1 + 0xb57;
  FUN_1020b0c2(param_2 + 4,8);
  piVar2 = param_1 + 0x790;
  FUN_1020c0a2(piVar2,piVar1,param_4);
  FUN_1020c0a2(piVar2,piVar1,param_4);
  FUN_1020c0a2(piVar2,piVar1,param_4);
  param_1[0xb5e] = *(int *)(param_2 + 0x28);
  param_1[0xb5f] = *(int *)(param_2 + 0x30);
  param_1[0xb60] = *(int *)(param_2 + 0x34);
  iVar4 = *param_10;
  param_1[0xb62] = param_10[1];
  param_1[0xb61] = iVar4;
  param_1[0xb64] = param_5;
  param_1[0xb65] = param_6;
  param_1[0xb66] = param_7;
  param_1[0xb67] = param_8;
  param_1[0xb68] = param_9;
  *(undefined1 *)((int)param_1 + 0x2d8e) = *(undefined1 *)(param_2 + 0xb9);
  iVar4 = *(int *)(param_2 + 0xe4);
  param_1[0xb69] = iVar4;
  iVar3 = *(int *)(param_2 + 0xe8);
  param_1[0xb6a] = iVar3;
  iVar5 = -iVar4;
  if (-iVar4 < 0) {
    iVar5 = iVar4;
  }
  iVar4 = -iVar3;
  if (-iVar3 < 0) {
    iVar4 = iVar3;
  }
  if (iVar4 < iVar5) {
    iVar4 = iVar5;
  }
  param_1[0xb6b] = iVar4 * 2;
  param_1[0xb6c] = 0x199a;
  *(undefined1 *)((int)param_1 + 0x2d8f) = 1;
  *(undefined2 *)(param_1 + 0xb63) = 0;
  *(undefined1 *)(param_1 + 0xb77) = 0;
  return;
}

