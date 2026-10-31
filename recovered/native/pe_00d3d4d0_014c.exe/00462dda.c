/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00462dda */

void __fastcall FUN_00462dda(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_2c;
  cVar1 = FUN_00463d7c(param_1[0xb66]);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31(extraout_var,*(char *)((int)param_1 + 0x2d8d) == '\0');
  }
  local_2c = param_2;
  if ((param_1[0xb72] != param_3 || param_1[0xb71] != param_2) || (uVar2 & 1) != 0) {
    local_28 = uVar2;
    FUN_00463d80(param_1,param_1[0xb71],param_1[0xb72],param_2,param_3,&local_18,&local_1c);
    local_24 = param_1[0xb71] + local_18;
    local_20 = param_1[0xb72] + local_1c;
    iVar4 = local_18 + param_2;
    iVar3 = local_1c + param_3;
    if (*(char *)((int)param_1 + 0x2d8f) != '\0') {
      FUN_00463f3e(param_1,local_24,local_20);
      *(undefined1 *)((int)param_1 + 0x2d8f) = 0;
      *(undefined1 *)(param_1 + 0xb63) = 1;
      param_1[0xb6f] = iVar4;
      param_1[0xb70] = iVar3;
    }
    if ((char)param_1[0xb77] != '\0') {
      FUN_00463ff1(param_1,param_1 + 2,&local_24,iVar4,iVar3,'\0');
    }
    *(undefined1 *)(param_1 + 0xb77) = 1;
    param_1[0xb78] = 2;
    param_1[0xb7a] = local_20;
    param_1[0xb79] = local_24;
    param_1[0xb7b] = iVar4;
    param_1[0xb7c] = iVar3;
    if ((char)local_28 != '\0') {
      FUN_0046385b(param_1 + 2,param_1[0xb64],param_1[0xb65],(undefined4 *)param_1[0xb66],
                   param_1[0xb67],'\0');
    }
    param_1[0xb71] = local_2c;
    param_1[0xb72] = param_3;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_2c);
}

