/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001b6e3 */

ulonglong FUN_18001b6e3(undefined1 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong unaff_RBX;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = param_3;
  local_4e = param_1;
  FUN_18001b936(param_3,local_78,&local_4e);
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    uVar1 = *(uint *)(param_2 + 4);
    if (uVar1 <= uVar4) break;
    local_4b = *(undefined1 *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar4);
    local_4a = *(undefined1 *)(*(longlong *)(param_2 + 8) + 1 + (ulonglong)uVar4);
    FUN_18001b936(local_58,local_b8,&local_4b,&local_4a);
    uVar5 = FUN_18001b9c8(local_b8,local_78);
    unaff_RBX = (ulonglong)uVar5;
    bVar2 = (int)uVar5 < 1;
    if ((int)uVar5 < 1) {
      local_49 = 1;
      FUN_18001b936(local_58,local_98,&local_4a,&local_49);
      local_4c = 1;
      local_4d = 0;
      iVar6 = FUN_18001b9c8(local_78,local_98);
      bVar3 = iVar6 < 1;
      local_4d = bVar2;
      local_4c = bVar2;
      FUN_180001ef2(local_98);
    }
    else {
      bVar3 = false;
      local_4d = bVar2;
      local_4c = bVar2;
    }
    FUN_180001ef2(local_b8);
    uVar5 = uVar4 + 2;
  } while (!bVar3);
  FUN_180001ef2(local_78);
  return CONCAT71((int7)(unaff_RBX >> 8),uVar4 < uVar1) & 0xffffffff;
}

