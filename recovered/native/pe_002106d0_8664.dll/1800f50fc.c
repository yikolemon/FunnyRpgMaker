/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f50fc */

void FUN_1800f50fc(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  uVar2 = (*(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x18)) - 1;
  FUN_1800f4e94((ulonglong)(((uint)uVar2 & 1) << 3) +
                *(longlong *)
                 (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar2 >> 1) * 8
                 ));
  plVar1 = (longlong *)(param_1 + 0x20);
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

