// The function of this dialog is to show as much system information available
Use LanguageText.Pkg                   // Translation strings

#IFSAME Language$Current Language$English
    Use SysInfo_Language_English.Inc
#ENDIF

#IFSAME Language$Current Language$Nederlands
    Use SysInfo_Language_Nederlands.inc
#ENDIF

#IFSAME Language$Current Language$Svenska
    Use SysInfo_Language_Svenska.inc
#ENDIF

#IFSAME Language$Current Language$Deutsch
    Use SysInfo_Language_Deutsch.inc
#ENDIF

#IFSAME Language$Current Language$Dansk
    Use SysInfo_Language_Dansk.inc
#ENDIF

#IFSAME Language$Current Language$Portugues
    Use SysInfo_Language_Portugues.inc
#ENDIF

#IFSAME Language$Current Language$Francais
    Use SysInfo_Language_Francais.inc
#ENDIF

#IFSAME Language$Current Language$Italiano
    Use SysInfo_Language_Italiano.inc
#ENDIF

#IFSAME Language$Current Language$Espanol
    Use SysInfo_Language_Espanol.inc
#ENDIF

#IFSAME Language$Current Language$Norsk
    Use SysInfo_Language_Norsk.inc
#ENDIF

#IFSAME Language$Current Language$Russian
    Use SysInfo_Language_Russian.inc
#ENDIF

#IFSAME Language$Current Language$Polish
    Use SysInfo_Language_Polish.inc
#ENDIF

#IFSAME Language$Current Language$Hungarian
    Use SysInfo_Language_Hungarian.inc
#ENDIF
