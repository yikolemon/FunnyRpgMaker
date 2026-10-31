/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005f70e */

void FUN_14005f70e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 local_c0 [32];
  undefined1 local_a0 [16];
  longlong local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined2 local_62;
  undefined8 local_60 [4];
  
  local_60[0] = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 8);
  local_80 = param_3;
  local_78 = param_2;
  FUN_14005f924(*(undefined8 *)(param_1 + 0x18),local_a0);
  if (local_90 != 0) {
    for (uVar5 = 0; uVar5 < 0x100; uVar5 = uVar5 + 1) {
      local_62 = (undefined2)uVar5;
      FUN_14005f924(*(undefined8 *)(param_1 + 0x18),local_c0,&local_62,local_60);
      cVar3 = FUN_140059580(local_c0,local_a0);
      FUN_140001e90(local_c0);
      if (cVar3 != '\0') {
        puVar4 = *(undefined8 **)(lVar2 + 0x28);
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)FUN_1401887b0(0x20);
          puVar4[2] = 0;
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          *(undefined8 **)(lVar2 + 0x28) = puVar4;
          local_70 = puVar4;
        }
        pbVar1 = (byte *)((longlong)puVar4 + (ulonglong)(uVar5 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar5 & 7));
      }
    }
    FUN_14005faa0(param_1,local_78,local_80,lVar2 + 0x48);
    FUN_140001e90(local_a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140189b60(0);
}

