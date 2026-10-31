/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cfd0c */

undefined8 FUN_1800cfd0c(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  WCHAR local_148 [128];
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_1802a89a0(local_148,0,0x100);
  iVar3 = GetKeyNameTextW((uint)(byte)uVar2 << 0x18 | (uint)uVar1 << 0x10,local_148,0x80);
  if (iVar3 == 0) {
    FUN_180001e92(param_2,&DAT_1803861e4);
  }
  else {
    FUN_180001254(local_48,local_148);
    FUN_1800c9080(param_2,local_48);
    FUN_1800010ec(local_48);
  }
  return param_2;
}

