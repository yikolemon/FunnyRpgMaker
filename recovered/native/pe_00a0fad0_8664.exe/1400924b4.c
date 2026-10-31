/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400924b4 */

ulonglong FUN_1400924b4(undefined2 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong unaff_RBX;
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined8 local_60;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = param_3;
  local_52 = param_1;
  FUN_14009292a(param_3,local_80,&local_52);
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    uVar1 = *(uint *)(param_2 + 4);
    if (uVar1 <= uVar4) break;
    local_50 = *(undefined2 *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar4 * 2);
    local_4e = *(undefined2 *)(*(longlong *)(param_2 + 8) + 2 + (ulonglong)uVar4 * 2);
    FUN_14009292a(local_60,local_c0,&local_50,&local_4e);
    uVar5 = FUN_1400929bc(local_c0,local_80);
    unaff_RBX = (ulonglong)uVar5;
    bVar2 = (int)uVar5 < 1;
    if ((int)uVar5 < 1) {
      local_49 = 1;
      FUN_14009292a(local_60,local_a0,&local_4e,&local_4c);
      local_4a = 1;
      local_4b = 0;
      iVar6 = FUN_1400929bc(local_80,local_a0);
      bVar3 = iVar6 < 1;
      local_4b = bVar2;
      local_4a = bVar2;
      FUN_140005242(local_a0);
    }
    else {
      bVar3 = false;
      local_4b = bVar2;
      local_4a = bVar2;
    }
    FUN_140005242(local_c0);
    uVar5 = uVar4 + 2;
  } while (!bVar3);
  FUN_140005242(local_80);
  return CONCAT71((int7)(unaff_RBX >> 8),uVar4 < uVar1) & 0xffffffff;
}

