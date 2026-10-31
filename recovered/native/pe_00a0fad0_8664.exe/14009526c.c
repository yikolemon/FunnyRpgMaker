/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009526c */

void FUN_14009526c(longlong *param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  
  lVar2 = param_1[1];
  FUN_140095510((char)param_1,lVar2,param_2,param_3 != 0);
  if (param_3 == 0) {
    uVar1 = *(ushort *)(lVar2 + 0x40);
    uVar3 = (ushort)param_2;
    if ((uVar1 == 0) || (uVar3 != 0xffff && uVar1 != 0xffff)) {
      *(ushort *)(lVar2 + 0x40) = uVar1 | uVar3;
    }
    else if (uVar1 != uVar3) {
      *(ushort *)(lVar2 + 0x40) = uVar1 & uVar3;
      *(byte *)(lVar2 + 0xd) = *(byte *)(lVar2 + 0xd) | 8;
    }
  }
  else {
    *(uint *)(lVar2 + 0xc) = *(uint *)(lVar2 + 0xc) | param_3;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | param_3;
  }
  return;
}

