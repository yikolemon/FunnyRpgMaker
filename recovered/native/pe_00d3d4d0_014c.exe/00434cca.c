/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00434cca */

int __fastcall FUN_00434cca(ushort *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 extraout_var;
  int iVar5;
  
  uVar4 = FUN_00434cbf(param_1);
  uVar3 = param_1[1];
  if (CONCAT22(extraout_var,uVar4) == 1) {
    bVar1 = *(byte *)((int)param_1 + 3);
    iVar5 = FUN_00406d48((int)param_1);
    iVar5 = (uint)(byte)uVar3 * 0x200 + iVar5 + (uint)bVar1 * 2;
  }
  else {
    uVar2 = *(undefined1 *)((int)param_1 + 3);
    iVar5 = FUN_00406d48((int)param_1);
    iVar5 = iVar5 + (uint)CONCAT11((byte)uVar3,uVar2) * 6;
  }
  return iVar5;
}

