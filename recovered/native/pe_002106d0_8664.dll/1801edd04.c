/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801edd04 */

void FUN_1801edd04(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *param_2;
  uVar4 = (ulonglong)uVar1 & 0xffff;
  if ((uint)uVar4 < (uint)*(ushort *)(param_1 + 0x78)) {
    uVar2 = param_2[1];
    uVar5 = (ulonglong)uVar2 & 0xffff;
    if ((uint)uVar5 < (uint)*(ushort *)(param_1 + 0x40)) {
      iVar3 = (**(code **)(param_1 + 0x2d8))
                        (param_1,*(int *)(*(longlong *)(param_1 + 0x50) + uVar5 * 8) -
                                 *(int *)(*(longlong *)(param_1 + 0x88) + uVar4 * 8),
                         *(int *)(*(longlong *)(param_1 + 0x50) + 4 + uVar5 * 8) -
                         *(int *)(*(longlong *)(param_1 + 0x88) + 4 + uVar4 * 8));
      (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0x78,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001801edda6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0x40,uVar2,-(iVar3 / 2));
      return;
    }
  }
  if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  return;
}

