//
//  SoundCloud.h
//  Stofkat.org
//
// First basic version of my custom SoundCloud library
// The one from SoundCloud has 5 dependancy projects just
// for some very basic funtionality. This project only uses
// JSONKit as an aditional library and should be much easier
// to implement in your own projects
// if you have any questions you can mail me at stofkat@gmail.com
//  Created by Stofkat on 08-05-14.
//
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
@interface SoundCloud : NSObject

//Change these to your own apps values
#define CLIENT_ID @"556342e4587879ca2bb772d5056e2299"
#define CLIENT_SECRET @"afc3948be5752e0a0292ca6553f43d93"
#define REDIRECT_URI @"trackmapper://oauth"//don't forget to change this in Info.plist as well

#define SC_API_URL @"https://api.soundcloud.com"
#define SC_TOKEN @"SC_TOKEN"
#define SC_CODE @"SC_CODE"

@property (strong, nonatomic)  NSMutableArray *scTrackResultList;
@property (strong, nonatomic)  NSMutableArray *scPlaylistResult;
@property (nonatomic,retain) AVAudioPlayer *audioPlayer;
@property (strong, nonatomic)  NSString *scToken;
@property (strong, nonatomic)  NSString *scCode;

+(instancetype)sharedStore;
-(NSMutableArray *) searchForTracksWithQuery: (NSString *) query;
-(NSData *) downloadTrackData :(NSString *)songURL;
-(NSMutableArray *) getUserTracks;
-(NSMutableArray *) getUserPlaylists;
-(BOOL) login;
@end
