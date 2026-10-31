/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ee1ca */

void FUN_1801ee1ca(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_2;
  uVar2 = uVar1 & 0xffff;
  if (uVar2 < *(ushort *)(param_1 + 0x40)) {
    iVar4 = 0;
    if ((*(byte *)(param_1 + 0x1f0) & 1) != 0) {
      iVar3 = (**(code **)(param_1 + 0x2d8))
                        (param_1,*(undefined4 *)
                                  (*(longlong *)(param_1 + 0x50) + (ulonglong)uVar2 * 8),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 4 + (ulonglong)uVar2 * 8),0
                        );
      iVar4 = (**(code **)(param_1 + 0x2c8))(param_1,iVar3,0);
      iVar4 = iVar4 - iVar3;
    }
    (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0x40,uVar1,iVar4);
    *(short *)(param_1 + 0x18c) = (short)uVar1;
    *(short *)(param_1 + 0x18e) = (short)uVar1;
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  return;
}

