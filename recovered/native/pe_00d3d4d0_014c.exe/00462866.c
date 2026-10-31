/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00462866 */

void __fastcall
FUN_00462866(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 *param_10)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _memset(param_1 + 2,0,0x2dfc);
  *param_1 = param_2;
  param_1[1] = param_3;
  puVar1 = param_1 + 0xb57;
  FUN_0046283a(puVar1,*param_2,param_2 + 1,8);
  piVar2 = param_1 + 0x790;
  FUN_0046381e(piVar2,(int)param_2,(int)piVar2,(int)puVar1,param_4);
  FUN_0046381e(param_1 + 0x3c9,(int)param_2,(int)piVar2,(int)puVar1,param_4);
  FUN_0046381e(param_1 + 2,(int)param_2,(int)piVar2,(int)puVar1,param_4);
  param_1[0xb5e] = param_2[10];
  param_1[0xb5f] = param_2[0xc];
  param_1[0xb60] = param_2[0xd];
  uVar3 = *param_10;
  param_1[0xb62] = param_10[1];
  param_1[0xb61] = uVar3;
  param_1[0xb64] = param_5;
  param_1[0xb65] = param_6;
  param_1[0xb66] = param_7;
  param_1[0xb67] = param_8;
  param_1[0xb68] = param_9;
  *(undefined1 *)((int)param_1 + 0x2d8e) = *(undefined1 *)((int)param_2 + 0xb9);
  iVar5 = param_2[0x39];
  param_1[0xb69] = iVar5;
  iVar4 = param_2[0x3a];
  param_1[0xb6a] = iVar4;
  iVar6 = -iVar5;
  if (-iVar5 < 0) {
    iVar6 = iVar5;
  }
  iVar5 = -iVar4;
  if (-iVar4 < 0) {
    iVar5 = iVar4;
  }
  if (iVar5 < iVar6) {
    iVar5 = iVar6;
  }
  param_1[0xb6b] = iVar5 * 2;
  param_1[0xb6c] = 0x199a;
  *(undefined1 *)((int)param_1 + 0x2d8f) = 1;
  *(undefined2 *)(param_1 + 0xb63) = 0;
  *(undefined1 *)(param_1 + 0xb77) = 0;
  return;
}

