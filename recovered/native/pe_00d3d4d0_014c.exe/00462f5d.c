/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00462f5d */

void __fastcall
FUN_00462f5d(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_38;
  FUN_00463d80(param_1,param_1[0xb71],param_1[0xb72],param_2,param_3,&local_18,&local_1c);
  FUN_00463d80(param_1,param_4,param_5,param_6,param_7,&local_20,&local_24);
  iVar4 = param_1[1];
  iVar5 = *(int *)(iVar4 + 0x10);
  local_34 = param_5;
  iVar3 = FUN_00464269(param_2,param_3,param_4,param_5);
  *(int *)(iVar4 + 0x10) = iVar3 + iVar5;
  local_2c = param_1[0xb71] + local_18;
  iVar4 = local_18 + param_2;
  local_28 = param_1[0xb72] + local_1c;
  iVar5 = local_1c + param_3;
  if (*(char *)((int)param_1 + 0x2d8f) != '\0') {
    local_38 = local_24;
    FUN_00463f3e(param_1,local_2c,local_28);
    *(undefined1 *)((int)param_1 + 0x2d8f) = 0;
    *(undefined1 *)(param_1 + 0xb63) = 1;
    param_1[0xb6f] = iVar4;
    param_1[0xb70] = iVar5;
    local_24 = local_38;
  }
  local_34 = local_34 + local_24;
  local_38 = local_24 + param_7;
  iVar3 = param_4 + local_20;
  if ((char)param_1[0xb77] != '\0') {
    local_30 = param_4 + local_20;
    FUN_00463ff1(param_1,param_1 + 2,&local_2c,iVar4,iVar5,'\0');
    iVar3 = local_30;
  }
  *(undefined1 *)(param_1 + 0xb77) = 1;
  param_1[0xb78] = 4;
  param_1[0xb7a] = local_28;
  param_1[0xb79] = local_2c;
  param_1[0xb7b] = iVar4;
  param_1[0xb7c] = iVar5;
  param_1[0xb7d] = iVar3;
  param_1[0xb7e] = local_34;
  param_1[0xb7f] = local_20 + param_6;
  param_1[0xb80] = local_38;
  puVar1 = (undefined4 *)param_1[0xb66];
  cVar2 = FUN_00463d7c((int)puVar1);
  if (cVar2 != '\0') {
    FUN_0046385b(param_1 + 2,param_1[0xb64],param_1[0xb65],puVar1,param_1[0xb67],'\0');
  }
  param_1[0xb71] = param_6;
  param_1[0xb72] = param_7;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_38);
}

