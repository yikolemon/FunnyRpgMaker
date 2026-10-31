/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005787f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1005787f(undefined2 *param_1,undefined4 param_2,double param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  size_t local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  iVar2 = FUN_10268ff0(param_3);
  if (iVar2 != 0) {
    param_3 = (double)((ulonglong)param_3 ^ _DAT_1028f730);
    *(undefined1 *)param_1 = 0x2d;
    param_1 = (undefined2 *)((int)param_1 + 1);
  }
  if ((param_3 != 0.0) || (NAN(param_3))) {
    local_18 = 0;
    local_1c = 0;
    FUN_10057a67(param_1,&local_18,&local_1c,param_3);
    iVar1 = local_18;
    iVar2 = local_18 + local_1c;
    if (iVar2 < 0x10 && -1 < (int)local_1c) {
      _memset((undefined1 *)(local_18 + (int)param_1),0x30,local_1c);
      *(undefined2 *)((int)param_1 + iVar2) = 0x302e;
      param_1 = (undefined2 *)((int)param_1 + iVar2 + 2);
    }
    else if (iVar2 - 0x10U < 0xfffffff1) {
      if (iVar2 + 3U < 4) {
        FUN_1025b2d0((undefined1 *)((int)param_1 + (2 - iVar2)),param_1);
        *param_1 = 0x2e30;
        _memset(param_1 + 1,0x30,-iVar2);
        param_1 = (undefined2 *)((int)param_1 + (iVar1 - iVar2) + 2);
      }
      else {
        if (local_18 != 1) {
          FUN_1025b2d0(param_1 + 1,(undefined1 *)((int)param_1 + 1),local_18 + -1);
          *(undefined1 *)((int)param_1 + 1) = 0x2e;
          param_1 = (undefined2 *)((int)param_1 + iVar1);
        }
        *(undefined1 *)((int)param_1 + 1) = 0x65;
        uVar3 = -(iVar2 - 1U);
        if ((int)uVar3 < 0) {
          uVar3 = iVar2 - 1U;
        }
        *(char *)(param_1 + 1) = (iVar2 < 1) * '\x02' + '+';
        if (uVar3 < 10) {
          *(undefined1 *)((int)param_1 + 3) = 0x30;
        }
        else {
          if (99 < uVar3) {
            *(char *)((int)param_1 + 3) = (char)(uVar3 / 100) + '0';
            bVar4 = (byte)((uVar3 % 100) / 10);
            *(byte *)(param_1 + 2) = bVar4 | 0x30;
            *(byte *)((int)param_1 + 5) = (char)(uVar3 % 100) + bVar4 * -10 | 0x30;
            param_1 = param_1 + 3;
            goto LAB_10057a42;
          }
          bVar4 = (byte)((uVar3 * 0xcd & 0xffff) >> 0xb);
          *(byte *)((int)param_1 + 3) = bVar4 | 0x30;
          uVar3 = (uint)(byte)((char)uVar3 + bVar4 * -10);
        }
        *(byte *)(param_1 + 2) = (byte)uVar3 | 0x30;
        param_1 = (undefined2 *)((int)param_1 + 5);
      }
    }
    else {
      FUN_1025b2d0((undefined1 *)((int)param_1 + iVar2 + 1),(undefined1 *)((int)param_1 + iVar2),
                   -local_1c);
      *(undefined1 *)((int)param_1 + iVar2) = 0x2e;
      param_1 = (undefined2 *)((int)param_1 + iVar1 + 1);
    }
  }
  else {
    *param_1 = 0x2e30;
    *(undefined1 *)(param_1 + 1) = 0x30;
    param_1 = (undefined2 *)((int)param_1 + 3);
  }
LAB_10057a42:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

