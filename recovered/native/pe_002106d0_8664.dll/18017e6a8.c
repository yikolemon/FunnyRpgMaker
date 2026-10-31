/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017e6a8 */

void FUN_18017e6a8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  byte *pbVar5;
  char *pcVar6;
  
  do {
    if (*(int *)((longlong)param_1 + 0x482c) == 0) {
      lVar2 = *param_1;
      pbVar5 = *(byte **)(lVar2 + 0xc0);
      if (*(byte **)(lVar2 + 200) <= pbVar5) {
        if (*(int *)(lVar2 + 0x30) == 0) goto LAB_18017e6bb;
        FUN_180176673(lVar2);
        pbVar5 = *(byte **)(lVar2 + 0xc0);
      }
      *(byte **)(lVar2 + 0xc0) = pbVar5 + 1;
      bVar4 = *pbVar5;
      if (bVar4 == 0xff) {
        lVar2 = *param_1;
        pcVar6 = *(char **)(lVar2 + 0xc0);
        if (*(char **)(lVar2 + 200) <= pcVar6) {
          if (*(int *)(lVar2 + 0x30) == 0) {
            cVar3 = '\0';
            goto LAB_18017e736;
          }
          FUN_180176673(lVar2);
          pcVar6 = *(char **)(lVar2 + 0xc0);
        }
        *(char **)(lVar2 + 0xc0) = pcVar6 + 1;
        do {
          cVar3 = *pcVar6;
LAB_18017e736:
          do {
            if (cVar3 != -1) {
              if (cVar3 != '\0') {
                *(char *)(param_1 + 0x905) = cVar3;
                *(undefined4 *)((longlong)param_1 + 0x482c) = 1;
                return;
              }
              bVar4 = 0xff;
              goto LAB_18017e776;
            }
            lVar2 = *param_1;
            pcVar6 = *(char **)(lVar2 + 0xc0);
            if (pcVar6 < *(char **)(lVar2 + 200)) goto LAB_18017e7a9;
            cVar3 = '\0';
          } while (*(int *)(lVar2 + 0x30) == 0);
          FUN_180176673(lVar2);
          pcVar6 = *(char **)(lVar2 + 0xc0);
LAB_18017e7a9:
          *(char **)(lVar2 + 0xc0) = pcVar6 + 1;
        } while( true );
      }
    }
    else {
LAB_18017e6bb:
      bVar4 = 0;
    }
LAB_18017e776:
    iVar1 = *(int *)((longlong)param_1 + 0x4824);
    *(uint *)(param_1 + 0x904) =
         *(uint *)(param_1 + 0x904) | (uint)bVar4 << (0x18U - (char)iVar1 & 0x1f);
    *(int *)((longlong)param_1 + 0x4824) = iVar1 + 8;
    if (0x10 < iVar1) {
      return;
    }
  } while( true );
}

