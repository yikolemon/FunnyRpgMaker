/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235640 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_10235640(int *param_1)

{
  DWORD *pDVar1;
  int *piVar2;
  int iVar3;
  DWORD dwExceptionCode;
  DWORD dwExceptionFlags;
  DWORD nNumberOfArguments;
  DWORD DStack_44;
  undefined1 *puStack_40;
  DWORD DStack_3c;
  DWORD local_38;
  DWORD DStack_34;
  DWORD DStack_30;
  DWORD DStack_2c;
  DWORD local_28;
  DWORD DStack_24;
  DWORD DStack_20;
  DWORD DStack_1c;
  DWORD local_18;
  DWORD DStack_14;
  DWORD DStack_10;
  DWORD DStack_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  pDVar1 = (DWORD *)*param_1;
  if (pDVar1 == (DWORD *)0x0) {
    FUN_1006a3f8();
                    /* WARNING: Subroutine does not return */
    FUN_102586e0();
  }
  dwExceptionCode = *pDVar1;
  dwExceptionFlags = pDVar1[1];
  nNumberOfArguments = pDVar1[4];
  DStack_44 = pDVar1[5];
  puStack_40 = (undefined1 *)pDVar1[6];
  DStack_3c = pDVar1[7];
  local_38 = pDVar1[8];
  DStack_34 = pDVar1[9];
  DStack_30 = pDVar1[10];
  DStack_2c = pDVar1[0xb];
  local_28 = pDVar1[0xc];
  DStack_24 = pDVar1[0xd];
  DStack_20 = pDVar1[0xe];
  DStack_1c = pDVar1[0xf];
  local_18 = pDVar1[0x10];
  DStack_14 = pDVar1[0x11];
  DStack_10 = pDVar1[0x12];
  DStack_c = pDVar1[0x13];
  if (((dwExceptionCode == 0xe06d7363) && (nNumberOfArguments == 3)) &&
     ((DStack_44 == 0x19930520 ||
      (((DStack_44 == 0x19930521 || (DStack_44 == 0x19930522)) || (DStack_44 == 0x1994000)))))) {
    if (((puStack_40 == (undefined1 *)0x0) || (DStack_3c == 0)) ||
       ((piVar2 = *(int **)(DStack_3c + 0xc), piVar2 == (int *)0x0 || (*piVar2 < 1)))) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    iVar3 = -*(int *)(piVar2[1] + 0x14);
    *(int *)(&stack0xffffff90 + iVar3) = piVar2[1];
    *(undefined1 **)(&stack0xffffff8c + iVar3) = puStack_40;
    *(undefined1 **)(&stack0xffffff88 + iVar3) = &stack0xffffff94 + iVar3;
    *(undefined4 *)(&stack0xffffff84 + iVar3) = 0x102356f9;
    FUN_102357f0();
    puStack_40 = &stack0xffffff94 + iVar3;
  }
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,&DStack_44);
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

