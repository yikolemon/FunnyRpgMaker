/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180247400 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180247400(longlong *param_1)

{
  int iVar1;
  DWORD *pDVar2;
  longlong lVar3;
  DWORD dwExceptionCode;
  DWORD dwExceptionFlags;
  DWORD nNumberOfArguments;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined *puStack_100;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [32];
  DWORD local_b8;
  DWORD DStack_b4;
  DWORD DStack_b0;
  DWORD DStack_ac;
  DWORD local_a8;
  DWORD DStack_a4;
  DWORD DStack_a0;
  DWORD DStack_9c;
  ULONG_PTR local_98;
  undefined1 *puStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  DWORD local_38;
  DWORD DStack_34;
  DWORD DStack_30;
  DWORD DStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  puVar6 = auStack_f8;
  local_18 = DAT_180402640 ^ (ulonglong)local_d8;
  pDVar2 = (DWORD *)*param_1;
  if (pDVar2 == (DWORD *)0x0) {
    puStack_100 = (undefined *)0x180247437;
    FUN_18006a4a8(local_d8);
                    /* WARNING: Subroutine does not return */
    puStack_100 = &UNK_180247447;
    FUN_18026d5b0(local_d8,&DAT_1803a6370);
  }
  local_b8 = *pDVar2;
  DStack_b4 = pDVar2[1];
  DStack_b0 = pDVar2[2];
  DStack_ac = pDVar2[3];
  local_a8 = pDVar2[4];
  DStack_a4 = pDVar2[5];
  DStack_a0 = pDVar2[6];
  DStack_9c = pDVar2[7];
  local_98 = *(ULONG_PTR *)(pDVar2 + 8);
  puStack_90 = *(undefined1 **)(pDVar2 + 10);
  local_88 = *(longlong *)(pDVar2 + 0xc);
  lStack_80 = *(longlong *)(pDVar2 + 0xe);
  local_78 = *(undefined8 *)(pDVar2 + 0x10);
  uStack_70 = *(undefined8 *)(pDVar2 + 0x12);
  local_68 = *(undefined8 *)(pDVar2 + 0x14);
  uStack_60 = *(undefined8 *)(pDVar2 + 0x16);
  local_58 = *(undefined8 *)(pDVar2 + 0x18);
  uStack_50 = *(undefined8 *)(pDVar2 + 0x1a);
  local_48 = *(undefined8 *)(pDVar2 + 0x1c);
  uStack_40 = *(undefined8 *)(pDVar2 + 0x1e);
  local_38 = pDVar2[0x20];
  DStack_34 = pDVar2[0x21];
  DStack_30 = pDVar2[0x22];
  DStack_2c = pDVar2[0x23];
  local_28 = *(undefined8 *)(pDVar2 + 0x24);
  if (((local_b8 == 0xe06d7363) && (puVar6 = auStack_f8, DStack_a0 == 4)) &&
     (((int)local_98 + 0xe66cfae0U < 3 || (puVar6 = auStack_f8, (int)local_98 == 0x1994000)))) {
    if ((((puStack_90 == (undefined1 *)0x0) || (local_88 == 0)) ||
        (iVar1 = *(int *)(local_88 + 0xc), iVar1 == 0)) || (*(int *)(iVar1 + lStack_80) < 1)) {
                    /* WARNING: Subroutine does not return */
      puStack_100 = &UNK_1802475a5;
      abort();
    }
    uVar4 = (ulonglong)*(int *)(*(int *)((longlong)iVar1 + 4 + lStack_80) + lStack_80 + 0x14);
    uVar5 = uVar4 + 0xf;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffffffffff0;
    }
    puStack_100 = (undefined *)0x180247555;
    lVar3 = -(uVar5 & 0xfffffffffffffff0);
    puVar6 = auStack_f8 + lVar3;
    *(undefined8 *)(auStack_f8 + lVar3 + -8) = 0x180247565;
    FUN_1802476f0(local_d8 + lVar3);
    puStack_90 = local_d8 + lVar3;
  }
  nNumberOfArguments = DStack_a0;
  dwExceptionFlags = DStack_b4;
  dwExceptionCode = local_b8;
  *(undefined8 *)(puVar6 + -8) = 0x180247581;
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,&local_98);
  uVar5 = local_18 ^ (ulonglong)local_d8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar6 + -8) = &UNK_180247590;
  FUN_1802396d0(uVar5);
}

