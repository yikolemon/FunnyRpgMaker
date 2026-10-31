/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140053bcc */

int FUN_140053bcc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *******pppppppuVar4;
  longlong lVar5;
  undefined1 local_a0 [32];
  undefined8 ******local_80 [3];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar5 = *param_2;
  lVar1 = param_2[1];
  local_4c = 0;
  local_60 = param_1;
  while( true ) {
    if (lVar5 == lVar1) {
      return local_4c;
    }
    FUN_14000550c(local_80,lVar5,0);
    local_58 = 0xffff00000000;
    pppppppuVar4 = local_80;
    if (7 < local_68) {
      pppppppuVar4 = (undefined8 *******)local_80[0];
    }
    local_50 = FUN_1400dcbb0(pppppppuVar4,local_a0,3,0xffffffff);
    FUN_140007276(&local_58,local_50);
    uVar2 = (uint)local_58;
    if ((local_50 != 0) && (((uint)local_58 & 0xfffffff7) != 1)) break;
    FUN_140005690(local_80);
    if ((uVar2 == 3) && (iVar3 = FUN_140053d0a(local_60,lVar5), iVar3 != 0)) {
      return iVar3;
    }
    lVar5 = lVar5 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140041f39("status",local_50,local_80);
}

